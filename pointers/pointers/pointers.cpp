//
//  pointers.cpp
//  pointers
//
//  Created by Raul Max on 27/02/22.
//

#include "pointers.hpp"

#include <iostream>

using namespace std;

// MARK: - Pointer to Char

void pointerToChar() {
  const char *message {"Hello World!"};
  
  // this points towards the entire array of characters
  cout << "The message is: " << message << endl;
  
  // This points towards the first character
  cout << "The message is: " << *message << endl;
  cout << endl;
}

// MARK: - Array of strings

void arrayOfStrings() {
  
  // by pointing to the array position you can get the full value of the string
  // so there's no need to use a multiple dimension array
  const char *predictions [] {
    "a lot of kinds running in the backyard!",
    "you laughing your lungs out. I've never seen this before."
  };
  
  cout << "Prediction: " << predictions[0] << endl;
  cout << endl;
}

// MARK: - Non const ptr to non const

void nonConstPtrToNonconstData() {
  // Pointer: can modify the data and the pointer itself
  int *p_num1 {nullptr};
  int num1 {23};
  
  p_num1 = &num1;
  
  cout << "pointer number: " << *p_num1 << endl;
  cout << endl;
  
  // changing the value through the pointer
  *p_num1 = 432;
  
  cout << "Changed number through pointer: " << num1 << endl;
  cout << endl;
  
  // changing the pointer itself to make it point somewhere else
  int num2 {56};
  p_num1 = &num2;
  
  cout << "Changed the pointer to point somwehere else: " << *p_num1 << endl;
  cout << endl;
}

// MARK: - Pointer to Const

void PointerToConst() {
  
}
