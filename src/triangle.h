#pragma once
#include "vector.h"
class Triangle{
public:
  Vector2i a, b, c;
  Triangle(){
  }
  Triangle(Vector2i i, Vector2i j, Vector2i k){
    a = i;
    b = j;
    c = k;
  }
};
