#include <iostream>

#include "vector.h"
#include <typeinfo>
#include "display.cpp"
#include "triangle.h"
#include "render.cpp"
#include "object.h"


#ifdef _WIN32
  #include <windows.h>
#else
  #include <unistd.h>
#endif

using namespace std;
int main(){
  unsigned int microsecond = 1000000;
  Display display(20, 20);
  Triangle3 main(Vector3f(5,9,1), Vector3f(15,9,1), Vector3f(8,2,1));
  Object object(&main, 1);
  for(int i = 1; i < 50; i++){

    display.clearScreen();
    object.getTriangles()->rotate(Vector3f(0,0,0.03f));
    printf("%f%f%f",object.getTriangles()->a.x,object.getTriangles()->a.y,object.getTriangles()->a.z);
    Render renderer(&display, object.getTriangles(), 1);
    renderer.scanner(object.getSize());
    display.printDisplay();
    #ifdef _WIN32
      Sleep(100);
    #else
      usleep(0.1*microsecond);
    #endif
  }

  return 0;
}
