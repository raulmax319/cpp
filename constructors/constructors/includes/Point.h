//
//  Point.h
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#ifndef Point_h
#define Point_h

struct Point {
  double x;
  double y;
  Point() = default;
  Point(double x, double y) : x(x), y(y) {};
};

#endif /* Point_h */
