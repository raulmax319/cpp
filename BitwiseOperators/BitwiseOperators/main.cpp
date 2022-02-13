//
//  main.cpp
//  BitwiseOperators
//
//  Created by Raul Max on 13/02/22.
//

#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

/*
 |   a   |   b   |  a&b  |  a|b  |  ~a   |  a^b  |
 |   0   |   0   |   0   |   0   |   1   |   0   |
 |   0   |   1   |   0   |   1   |   1   |   1   |
 |   1   |   0   |   0   |   1   |   0   |   1   |
 |   1   |   1   |   1   |   1   |   0   |   0   |
 */

int main(int argc, const char * argv[]) {
  const int COLUMN_WIDTH {20};
  unsigned char value1 {0x3}; // 0000 0011
  unsigned char value2 {0x5}; // 0000 0101
  
  cout << "Values:" << endl;
  cout << setw(COLUMN_WIDTH) << "value 1: " << setw(COLUMN_WIDTH)
    << bitset<8>(value1) << endl;
  cout << setw(COLUMN_WIDTH) << "value 2: " << setw(COLUMN_WIDTH)
    << bitset<8>(value2) << endl << endl;
  
  // AND operator
  cout << "Bitwise AND:" << endl;
  cout << setw(COLUMN_WIDTH) << "value1 & value2: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(value1 & value2) << endl << endl;
  
  // OR operator
  cout << "Bitwise OR:" << endl;
  cout << setw(COLUMN_WIDTH) << "value1 | value2: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(value1 | value2) << endl << endl;
  
  // NOT operator
  cout << "Bitwise NOT:" << endl;
  cout << setw(COLUMN_WIDTH) << "~value1: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(~value1) << endl;
  cout << setw(COLUMN_WIDTH) << "~value2: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(~value2) << endl;
  
  // using binary literals
  cout << setw(COLUMN_WIDTH) << "~01011001: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(~0b01011001) << endl;
  cout << setw(COLUMN_WIDTH) << "~01011001: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(~0x59) << endl << endl;
  
  // XOR operator
  cout << "Bitwise XOR:" << endl;
  cout << setw(COLUMN_WIDTH) << "value1 ^ value2: ";
  cout << setw(COLUMN_WIDTH) << bitset<8>(value1 ^ value2) << endl << endl;
  
  return 0;
}
