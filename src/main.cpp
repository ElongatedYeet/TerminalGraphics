#include <iostream>
#include "vector.h"
#include "display.cpp"
#include "triangle.h"
#include "render.cpp"
using namespace std;

int main(){
  Vector2i a(1,2);
  Vector2i b(4,0);
  Vector2i c(5, 5);
  Display display(20, 20);

  cout << (a + b).x << endl;
  cout << (a + b).y << endl;

  Triangle test(a, b, c);
  Render renderer(&display, test);
  renderer.scanner();
  display.printDisplay();
  return 0;
}
