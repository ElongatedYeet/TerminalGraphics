#pragma once
#include <string>
#include <iostream>
#include "vector.h"
class Display{
private:
  int sizeX, sizeY;

public:
  std::string displayBuffer;
  Display(){
    
  }
  Display(int x, int y){
    sizeX = x; sizeY = y;
    for(int i = 1; i <= y; i++){
      displayBuffer.resize(i*(y+1)-1,'#');
      displayBuffer += '\n';
    }
  }
  void printDisplay(){
    std::cout << displayBuffer;;
  }
  Vector2i getSize(){
    return Vector2i(sizeX, sizeY);
  }
};
