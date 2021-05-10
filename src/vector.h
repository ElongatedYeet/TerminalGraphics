#pragma once
#include <stdlib.h>
class Vector2i{
public:
  int x,y,z;
  Vector2i(){

  }
  Vector2i(int a, int b, int c){
    x = a;
    y = b;
    z = c;
  }
  // Operator overloading
  Vector2i operator+(const Vector2i& a){
    Vector2i out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    out.z = this->z + a.z;
    return out;
  }
  Vector2i operator-(const Vector2i& a){
    Vector2i out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    out.z = this->z - a.z;
    return out;
  }
  Vector2i operator*(const Vector2i& a){
    Vector2i out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    out.z = this->z * a.z;
    return out;
  }
  Vector2i operator/(const Vector2i& a){
    Vector2i out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    out.z = this->z / a.z;
    return out;
  }
  

};
