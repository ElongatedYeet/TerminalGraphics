#include <iostream>

#include "vector.h"
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
  for(int i = 1; i < 15; i++){
    cout << "\033[2J\033[1;1H";
    Triangle3 test[] = {
      Triangle3(Vector3i(1+i,1,2+i), Vector3i(4+i,1,0+i), Vector3i(5+i,1,5+i)),
      Triangle3(Vector3i(5,i,5), Vector3i(15,i,7), Vector3i(8,i,9))};
    Object object(test, 2);
    Render renderer(&display, object.getTriangles());
    renderer.scanner(object.getSize());
    display.printDisplay();
    #ifdef _WIN32
      Sleep(500);
    #else
      usleep(0.5*microsecond);
    #endif
  }

  return 0;
}
