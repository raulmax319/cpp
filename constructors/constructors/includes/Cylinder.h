//
//  Cylinder.h
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#ifndef Cylinder_h
#define Cylinder_h
#define PI 3.1415

class Cylinder {
public:
  Cylinder() = default;
  Cylinder(double r, double h = 25);
  ~Cylinder() = default;
  double volume();
  double getBaseRadius();
  double getHeight();
  void setBaseRadius(double r);
  void setHeight(double h);
  
private:
  double baseRadius;
  double height;
};

#endif /* Cylinder_h */
