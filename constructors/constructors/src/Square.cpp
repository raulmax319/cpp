//
//  Square.cpp
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#include "Square.h"

Square::~Square() = default;

Square::Square(double side)
: Square(side, "blue", 10) {
  position = Point(0, 0);
}

Square::Square(double side, std::string color, int shading)
: side(side), color(color), shading(shading) {
}

double Square::surface() {
  return side * side;
}
