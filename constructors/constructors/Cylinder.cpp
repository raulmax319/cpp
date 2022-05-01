//
//  Cylinder.cpp
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#include "Cylinder.h"

Cylinder::~Cylinder() = default;

Cylinder::Cylinder() = default;

// Memberwise copy initialization
/*
Cylinder::Cylinder(double r, double h) {
  baseRadius = r;
  height = h;
}
 */

// Initializer lists
Cylinder::Cylinder(double r, double h)
: baseRadius(r), height(h) {
}

double Cylinder::volume() {
  return PI * baseRadius * height;
}

double Cylinder::getBaseRadius() {
  return baseRadius;
}

void Cylinder::setBaseRadius(double r) {
  baseRadius = r;
}

double Cylinder::getHeight() {
  return height;
}

void Cylinder::setHeight(double h) {
  height = h;
}
