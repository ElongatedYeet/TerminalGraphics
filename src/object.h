#pragma once
#include "triangle.h"
class Object{
private:
  Triangle3 * triangles;
  int size;
public:
  Object(){}
  Object(Triangle3 * tris, int s){
      triangles = tris;
      size = s;
  }
  Triangle3 * getTriangles(){
    return triangles;
  }
  int getSize(){
    return size;
  }
};
