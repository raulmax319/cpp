//
//  main.cpp
//  FirstApplication
//
//  Created by Raul Max on 03/02/22.
//

#include <iostream>

using namespace std;

int addNumbers(int first, int second) {
  return first + second;
}

int main(int argc, const char * argv[]) {
  cout << "Hello, World C++20!" << endl;
  
  cout << "Sum: " << addNumbers(35, 20) << endl << endl;
  
  // Data Input
  string name;
  string fullName;
  int age;
  
  // This has a problem with space characteres
  //  cout << "Please type your name: ";
  //  cin >> name;
  
  cout << "Please type your full name: ";
  getline(cin, fullName);
  
  cout << "Please type your age: ";
  cin >> age;
  
  cout << "Hello " << fullName << " you are " << age << " years old." << endl;
  return 0;
}
