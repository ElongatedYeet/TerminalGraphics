#pragma once
#include "display.cpp"
#include "math.h"
#include "triangle.h"
#include <string>

class Render{
private:
  Display display;
  Triangle triangle;
public:
  Render(Display dis, Triangle tri){
    display = dis;
    triangle = tri;
  }

  void scanner(){
    display.displayBuffer.resize(0,' ');
    for(int j = 0; j < display.getSize.y; j++){
      for(int i = 0; i < display.getSize.x; i++){
        if(raycast(triangle,i,j)){
          display.displayBuffer +=  '#';
        }else{
          display.displayBuffer += ' ';
        }
      }
      display.displayBuffer += '\n';
    }
  }

  bool raycast(Triangle tri, int x, int y){
    isInside(tri.a, tri.b, tri.c, Vector2i(x, y));
  }
};
