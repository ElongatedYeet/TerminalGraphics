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
    a = a + t;
    b = b + t;
    c = c + t;
  }
  void rotate(Vector3f r){
    a = rotateX(a, r.x);
    a = rotateY(a, r.y);
    a = rotateZ(a, r.z);
    b = rotateX(b, r.x);
    b = rotateY(b, r.y);
    b = rotateZ(b, r.z);
    c = rotateX(c, r.x);
    c = rotateY(c, r.y);
    c = rotateZ(c, r.z);
  }
  void rotateCenter(Vector3f r){
    Vector3f triCenter((a.x+b.x+c.x)/3,(a.y+b.y+c.y)/3,(a.z+b.z+c.z)/3);
    a = a - triCenter;
    b = b - triCenter;
    c = c - triCenter;
    a = rotateX(a, r.x);
    a = rotateY(a, r.y);
    a = rotateZ(a, r.z);
    b = rotateX(b, r.x);
    b = rotateY(b, r.y);
    b = rotateZ(b, r.z);
    c = rotateX(c, r.x);
    c = rotateY(c, r.y);
    c = rotateZ(c, r.z);
    a = a +triCenter;
    b = b + triCenter;
    c = c + triCenter;
  }
};
