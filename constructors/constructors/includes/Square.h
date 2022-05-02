//
//  Square.h
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#ifndef Square_h
#define Square_h

#include <string>
#include "Point.h"

class Square {
public:
  explicit Square(double side);
  Square(double side, std::string color, int shading);
  ~Square();
  double surface();
  
private:
  double side;
  std::string color;
  int shading;
  Point* position;
};

#endif /* Square_h */
