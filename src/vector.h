#pragma once
#include <stdlib.h>
// 2
class Vector2i{
public:
  int x,y;
  Vector2i(){

  }
  Vector2i(int a, int b){
    x = a;
    y = b;
  }
  // Operator overloading
  Vector2i operator+(const Vector2i& a){
    Vector2i out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    return out;
  }
  Vector2i operator-(const Vector2i& a){
    Vector2i out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    return out;
  }
  Vector2i operator*(const Vector2i& a){
    Vector2i out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    return out;
  }
  Vector2i operator/(const Vector2i& a){
    Vector2i out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    return out;
  }
  bool operator==(const Vector2i& a){
    bool out;
    out = (this->x == a.x && this->x == a.x);
    return out;
  }


};

class Vector2f{
public:
  float x,y;
  Vector2f(){

  }
  Vector2f(float a, float b){
    x = a;
    y = b;
  }
  // Operator overloading
  Vector2f operator+(const Vector2f& a){
    Vector2f out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    return out;
  }
  Vector2f operator-(const Vector2f& a){
    Vector2f out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    return out;
  }
  Vector2f operator*(const Vector2f& a){
    Vector2f out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    return out;
  }
  Vector2f operator/(const Vector2f& a){
    Vector2f out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    return out;
  }


};

// 3
class Vector3i{
public:
  int x,y,z;
  Vector3i(){

  }
  Vector3i(int a, int b, int c){
    x = a;
    y = b;
    z = c;
  }
  // Operator overloading
  Vector3i operator+(const Vector3i& a){
    Vector3i out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    out.z = this->z + a.z;
    return out;
  }
  Vector3i operator-(const Vector3i& a){
    Vector3i out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    out.z = this->z - a.z;
    return out;
  }
  Vector3i operator*(const Vector3i& a){
    Vector3i out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    out.z = this->z * a.z;
    return out;
  }
  Vector3i operator/(const Vector3i& a){
    Vector3i out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    out.z = this->z / a.z;
    return out;
  }


};

class Vector3f{
public:
  float x,y,z;
  Vector3f(){

  }
  Vector3f(float a, int b, int c){
    x = a;
    y = b;
    z = c;
  }
  // Operator overloading
  Vector3f operator+(const Vector3f& a){
    Vector3f out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    out.z = this->z + a.z;
    return out;
  }
  Vector3f operator-(const Vector3f& a){
    Vector3f out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    out.z = this->z - a.z;
    return out;
  }
  Vector3f operator*(const Vector3f& a){
    Vector3f out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    out.z = this->z * a.z;
    return out;
  }
  Vector3f operator/(const Vector3f& a){
    Vector3f out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    out.z = this->z / a.z;
    return out;
  }


};
