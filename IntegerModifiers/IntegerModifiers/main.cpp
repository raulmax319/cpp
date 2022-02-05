//
//  main.cpp
//  IntegerModifiers
//
//  Created by Raul Max on 05/02/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  
  // sizeof = 4
  signed int value1 { 10 };
  signed int value2 { -300 };
  
  cout << "value 1: " << value1 << endl << "value 2: " << value2 << endl << endl;
  
  cout << "size of value 1: " << sizeof(value1) << endl << endl;
  
  short signed int value3 { 256 };
  
  cout << "value 3: " << value3 << endl << "size of value 3: ";
  cout << sizeof(value3) << endl << endl;
  
  unsigned int value4 {}; // starts with value 0
  unsigned long int value5 {};
  
  cout << "size of value 5: " << sizeof(value5) << endl << "value 4: ";
  cout << value4 << endl << endl;
  
  auto var1 { 12 };
  auto var2 { 13.0 };
  auto var3 { 14.0f };
  auto var4 { 15.0l };
  auto var5 { 'R' };
  
  // with int modifiers
  auto var6 { 123u };
  auto var7 { 123ul };
  auto var8 { 123ll };
  
  cout << "var1's size: " << sizeof(var1) << endl;
  cout << "var2's size: " << sizeof(var2) << endl;
  cout << "var3's size: " << sizeof(var3) << endl;
  cout << "var4's size: " << sizeof(var4) << endl;
  cout << "var5's size: " << sizeof(var5) << endl;
  cout << "var6's size: " << sizeof(var6) << endl;
  cout << "var7's size: " << sizeof(var7) << endl;
  cout << "var8's size: " << sizeof(var8) << endl;
  return 0;
}
