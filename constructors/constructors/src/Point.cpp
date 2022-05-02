//
//  Point.cpp
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#include <iostream>
#include "Point.h"

Point::Point(double x, double y) : x(new double(x)), y(new double(y)) {}

// Deep copy
Point::Point(Point&& p)
: x(p.getX()), y(p.getY()) {
  p.invalidate();
}

Point::~Point() {
  delete x;
  delete y;
}

double* Point::getX() {
  return x;
}

void Point::setX(double x) {
  *(this->x) = x;
}

double* Point::getY() {
  return y;
}

void Point::setY(double y) {
  *(this->y) = y;
}

void Point::printInfo() {
  std::cout << "Point address: " << this << std::endl;
  std::cout << "X: " << *x << std::endl;
  std::cout << "Y: " << *y << std::endl;
}

void Point::invalidate() {
  x = nullptr;
  y = nullptr;
}
