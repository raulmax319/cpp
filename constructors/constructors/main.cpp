//
//  main.cpp
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#include <iostream>
#include "Cylinder.h"

using namespace std;

int main(int argc, const char * argv[]) {
  Cylinder* cylinder = new Cylinder(5);
  
  cout << "volume: " << cylinder->volume() << endl;
  
  delete cylinder;
  
  return 0;
}
