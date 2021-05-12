#pragma once
#include<cmath>
#include "vector.h"

float triangleArea(Vector2f p1, Vector2f p2, Vector2f p3) {         //find area of triangle formed by p1, p2 and p3
  return std::abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.y-p2.y))/2.0);
}

bool isInside(Vector2f p1, Vector2f p2, Vector2f p3, Vector2f p) {     //check whether p is inside or outside
  float area = triangleArea (p1, p2, p3);          //area of triangle ABC
  float area1 = triangleArea (p, p2, p3);         //area of PBC
  float area2 = triangleArea (p1, p, p3);         //area of APC
  float area3 = triangleArea (p1, p2, p);        //area of ABP

  return (area == area1 + area2 + area3);        //when three triangles are forming the whole triangle
}

Vector3f rotateX(Vector3f pos, float a){
  Matrix4f rotationX(1, 0, 0, 0, 0, std::cos(a), std::sin(a), 0, 0, -(std::sin(a)), std::cos(a),0 ,0, 0, 0, 1);
  Vector4f output = rotationX * Vector4f(pos.x,pos.y,pos.z,0);
  return Vector3f(output.x, output.y, output.z);

}

Vector3f rotateY(Vector3f pos, float a){
  Matrix4f rotationY(std::cos(a), 0, -(std::sin(a)), 0, 0, 1, 0, 0, std::sin(a), 0, std::cos(a),0 ,0, 0, 0, 1);
  Vector4f output = rotationY * Vector4f(pos.x,pos.y,pos.z,0);
  return Vector3f(output.x, output.y, output.z);

}

Vector3f rotateZ(Vector3f pos, float a){
  Matrix4f rotationZ(std::cos(a), std::sin(a), 0, 0, -(std::sin(a)), std::cos(a),0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
  Vector4f output = rotationZ * Vector4f(pos.x,pos.y,pos.z,0);
  return Vector3f(output.x, output.y, output.z);

}
