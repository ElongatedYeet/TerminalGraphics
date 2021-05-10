#pragma once
#include <string>
#include <iostream>
class Display{
private:
  int sizeX, sizeY;
  std::string displayBuffer;
public:
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
};
