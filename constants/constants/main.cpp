//
//  main.cpp
//  constants
//
//  Created by Raul Max on 12/02/22.
//

#include <iostream>

using namespace std;

const int value1 {33};
constexpr int value2 {34}; // constant expressions can be evaluated at compiletime
int value3 {35};

// constinit is available since c++ 20
constinit int age = 28;
const constinit int age2 {value1}; // const and constinit can be combined
constinit int age3 {age}; // initializing with age would lead to a compile error
                          // age is not a const

// constinit int age4 {value3}; // Error: value3 is evaluated at runtime
                                // can't const initialize age4

const constinit double weight {33.33};
// constexpr constinit double scale_factor {3.11}; // can't combine constexpr and constinit

int main(int argc, const char * argv[]) {
  // insert code here...
  cout << "Hello, World!\n";
  
  // constinit can only be initialized out of the main function
  // constinit int age5 {41}; // compile error: not static or thread local storage
  
  return 0;
}
