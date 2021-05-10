#pragma once
#include<cmath>
#include "vector.h"

float triangleArea(Vector2i p1, Vector2i p2, Vector2i p3) {         //find area of triangle formed by p1, p2 and p3
  return std::abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.y-p2.y))/2.0);
}

bool isInside(Vector2i p1, Vector2i p2, Vector2i p3, Vector2i p) {     //check whether p is inside or outside
  float area = triangleArea (p1, p2, p3);          //area of triangle ABC
  float area1 = triangleArea (p, p2, p3);         //area of PBC
  float area2 = triangleArea (p1, p, p3);         //area of APC
  float area3 = triangleArea (p1, p2, p);        //area of ABP

  return (area == area1 + area2 + area3);        //when three triangles are forming the whole triangle
}
