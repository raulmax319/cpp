//
//  main.cpp
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#include <iostream>
#include "Cylinder.h"
#include "Person.h"
#include "Point.h"

using namespace std;

int main(int argc, const char * argv[]) {
  string lastName = "Moura";
  string firstName = "Raul Max";
  int age = 18;
  
  Cylinder* cylinder = new Cylinder(5);
  Person* person = new Person(lastName, firstName, age);
  Person* person2 = new Person(*(person));
  Point* p1 = new Point(10, 15);
  
//  person->printInfo();
//  cout << endl;
//  person->setLastName(person->getLastName() + " Monteiro");
//  person2->printInfo();
//  cout << endl;
//  person->printInfo();
//  cout << endl;
  
  p1->printInfo();
  cout << endl;
  
  Point* p2 = new Point(Point(25, 30));
  p2->printInfo();
  cout << endl;
  
//  cout << "volume: " << cylinder->volume() << endl;
  
  return 0;
}
