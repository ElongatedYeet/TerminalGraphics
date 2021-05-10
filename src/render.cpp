#pragma once
#include "display.cpp"
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

  void raycast(){
    displayBuffer.resize(0,'');
    for(int j = 0; j < display.getSize.y){
      for(int i = 0l i < display.getSize.x){
        
      }
    }
  }

};
