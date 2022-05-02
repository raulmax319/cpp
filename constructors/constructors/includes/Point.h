//
//  Point.h
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#ifndef Point_h
#define Point_h

class Point {
public:
  Point() = delete;
  Point(double x, double y);
  Point(Point&& p) = delete;
  ~Point();
  
  double* getX();
  double* getY();
  void setX(double x);
  void setY(double y);
  void printInfo();
  void invalidate();
  
private:
  double* x;
  double* y;
};

#endif /* Point_h */
