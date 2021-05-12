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
  bool operator==(const Vector2f& a){
    bool out;
    out = (this->x == a.x && this->x == a.x);
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
  Vector3f(float a, float b, float c){
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

//4

class Vector4i{
public:
  int x,y,z,w;
public:
  Vector4i(){

  }
  Vector4i(int a, int b, int c, int d){
    x = a;
    y = b;
    z = c;
    w = d;
  }
  // Operator overloading
  Vector4i operator+(const Vector4i& a){
    Vector4i out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    out.z = this->z + a.z;
    out.w = this->w + a.w;
    return out;
  }
  Vector4i operator-(const Vector4i& a){
    Vector4i out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    out.z = this->z - a.z;
    out.w = this->w - a.w;
    return out;
  }
  Vector4i operator*(const Vector4i& a){
    Vector4i out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    out.z = this->z * a.z;
    out.w = this->w * a.w;
    return out;
  }
  Vector4i operator/(const Vector4i& a){
    Vector4i out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    out.z = this->z / a.z;
    out.w = this->w / a.w;
    return out;
  }


};

class Vector4f{
public:
  float x,y,z,w;
  Vector4f(){

  }
  Vector4f(float a, float b, float c, float d){
    x = a;
    y = b;
    z = c;
    w = d;
  }
  // Operator overloading
  Vector4f operator+(const Vector4f& a){
    Vector4f out;
    out.x = this->x + a.x;
    out.y = this->y + a.y;
    out.z = this->z + a.z;
    out.w = this->w + a.w;
    return out;
  }
  Vector4f operator-(const Vector4f& a){
    Vector4f out;
    out.x = this->x - a.x;
    out.y = this->y - a.y;
    out.z = this->z - a.z;
    out.w = this->w - a.w;
    return out;
  }
  Vector4f operator*(const Vector4f& a){
    Vector4f out;
    out.x = this->x * a.x;
    out.y = this->y * a.y;
    out.z = this->z * a.z;
    out.w = this->w * a.w;
    return out;
  }
  Vector4f operator/(const Vector4f& a){
    Vector4f out;
    out.x = this->x / a.x;
    out.y = this->y / a.y;
    out.z = this->z / a.z;
    out.w = this->w / a.w;
    return out;
  }




};
// Matrix
class Matrix4f{
public:
  float x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4, w1, w2, w3, w4;
  Matrix4f(){}
  Matrix4f(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4, float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4){
    x1 = a1;
    x2 = a2;
    x3 = a3;
    x4 = a4;
    y1 = b1;
    y2 = b2;
    y3 = b3;
    y4 = b4;
    z1 = c1;
    z2 = c2;
    z3 = c3;
    z4 = c4;
    w1 = d1;
    w2 = d2;
    w3 = d3;
    w4 = d4;
  }
  Matrix4f(Vector4f a, Vector4f b, Vector4f c, Vector4f d){
    x1 = a.x;
    x2 = a.y;
    x3 = a.z;
    x4 = a.w;
    y1 = b.x;
    y2 = b.y;
    y3 = b.z;
    y4 = b.w;
    z1 = c.x;
    z2 = c.y;
    z3 = c.z;
    z4 = c.w;
    w1 = d.x;
    w2 = d.y;
    w3 = d.z;
    w4 = d.w;
  }

  Vector4f operator*(const Vector4f &a){
    Vector4f out;
    out.x = this->x1 * a.x + this->y1 * a.y + this->z1 * a.z + this->w1 * a.w;
    out.y = this->x2 * a.x + this->y2 * a.y + this->z2 * a.z + this->w2 * a.w;
    out.z = this->x3 * a.x + this->y3 * a.y + this->z3 * a.z + this->w3 * a.w;
    out.w = this->x4 * a.x + this->y4 * a.y + this->z4 * a.z + this->w4 * a.w;
    return out;
  }
};
