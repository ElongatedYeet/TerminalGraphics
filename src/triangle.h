#pragma once
#include "vector.h"
#include "math.h"
class Triangle2{
public:
  Vector2f a, b, c;
  Triangle2(){
  }
  Triangle2(Vector2f i, Vector2f j, Vector2f k){
    a = i;
    b = j;
    c = k;
  }
  void translate(Vector2f t){
    a + t;
    b + t;
    c + t;
  }


};
class Triangle3{
public:
  Vector3f a, b, c;
  Triangle3(){
  }
  Triangle3(Vector3f i, Vector3f j, Vector3f k){
    a = i;
    b = j;
    c = k;
  }
  void translate(Vector3f t){
    a + t;
    b + t;
    c + t;
  }
  void rotate(Vector3f r){
    a = rotateX(a, r.x);
    b = rotateX(a, r.y);
    c = rotateX(a, r.z);
  }
};
