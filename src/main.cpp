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
  Display display(32, 32);
  Triangle3 main(Vector3f(5,5,1), Vector3f(15,5,1), Vector3f(5,15,1));
  Object object(&main, 1);
  for(int i = 1; i < 1000; i++){

    display.clearScreen();
    if(i%5==0)
      object.getTriangles()->translate(Vector3f(0.2f,0.1f,0));
    object.getTriangles()->rotateCenter(Vector3f(0,0,0.02f));
    Render renderer(&display, object.getTriangles(), 1, 0.1f);
    renderer.scanner(object.getSize());
    display.printDisplay();
    #ifdef _WIN32
      Sleep(40);
    #else
      usleep(0.04*microsecond);
    #endif
  }

  return 0;
}
