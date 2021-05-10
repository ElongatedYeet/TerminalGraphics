#include <iostream>
#include "vector.h"
using namespace std;

int main(){
  Vector2i a(1,2,3);
  Vector2i b(4,0,2);
  cout << (a + b).x << endl;
  cout << (a + b).y << endl;
  cout << (a + b).z << endl;
  return 0;
}
