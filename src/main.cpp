#include <iostream>
#include "vector.h"
#include "display.cpp"
using namespace std;

int main(){
  Vector2i a(1,2);
  Vector2i b(4,0);
  Display display(20, 20);

  cout << (a + b).x << endl;
  cout << (a + b).y << endl;
  display.printDisplay();
  return 0;
}
