#pragma once
#include "vector.h"
class Triangle2{
public:
  Vector2i a, b, c;
  Triangle2(){
  }
  Triangle2(Vector2i i, Vector2i j, Vector2i k){
    a = i;
    b = j;
    c = k;
  }
};
class Triangle3{
public:
  Vector3i a, b, c;
  Triangle3(){
  }
  Triangle3(Vector3i i, Vector3i j, Vector3i k){
    a = i;
    b = j;
    c = k;
  }
};
