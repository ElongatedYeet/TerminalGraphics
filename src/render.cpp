#pragma once
#include "display.cpp"
#include "math.h"
#include "triangle.h"
#include "vector.h"
#include <string>

class Render{
private:
  Display * display;
  Triangle3 * triangles;
public:
  Render(){
  }
  Render(Display * dis, Triangle3 * tri){
    display = dis;
    triangles = tri;
  }

  void scanner(int size){
    display->displayBuffer.resize(0,' ');
    for(int j = 0; j < display->getSize().y; j++){
      for(int i = 0; i < display->getSize().x; i++){
        for (int t = 0; t < size; t++){
          if(raycast(flatten(*(triangles+t)),i,j)){
            display->displayBuffer +=  '#';
            break;
          }
          else if(t==size-1){
            display->displayBuffer += ' ';
          }
        }

      }
      display->displayBuffer += '\n';
    }
  }
  Triangle2 flatten(Triangle3 tri){
    return Triangle2(
      Vector2f(
        (tri.a.x-(display->getSize().x/2))/tri.a.z + (display->getSize().x/2),
        (tri.a.y-(display->getSize().y/2))/tri.a.z + (display->getSize().y/2)),
      Vector2f(
        (tri.b.x-(display->getSize().x/2))/tri.b.z + (display->getSize().x/2),
        (tri.b.y-(display->getSize().y/2))/tri.b.z + (display->getSize().y/2)),
      Vector2f(
        (tri.c.x-(display->getSize().x/2))/tri.c.z + (display->getSize().x/2),
        (tri.c.y-(display->getSize().y/2))/tri.c.z + (display->getSize().y/2))
    );
  }
  bool raycast(Triangle2 tri, float x, float y){
    if(tri.a == tri.b && tri.b == tri.c){
      return false;
    }
    return isInside(tri.a, tri.b, tri.c, Vector2f(x, y));
  }
};
