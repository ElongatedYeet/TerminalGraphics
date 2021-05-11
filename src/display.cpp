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
  }
  void printDisplay(){
    std::cout << displayBuffer;;
  }
  Vector2i getSize(){
    return Vector2i(sizeX, sizeY);
  }
};
