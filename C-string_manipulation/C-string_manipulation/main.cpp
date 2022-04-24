//
//  main.cpp
//  C-string_manipulation
//
//  Created by Raul Max on 21/04/22.
//

#include <iostream>
#include "utils.h"

using namespace std;

int main(int argc, const char * argv[]) {
  const char message1[] {"The sky is blue."};
  const char* message2 {"The sky is blue."};
  const char* message3 {"The sky is beautiful"};
  size_t n = strlen(message2);
  
  std::cout << sizeof(message1) << std::endl; // length of the array
  std::cout << sizeof(message2) << std::endl; // length of the address
  
  cout << "-------------------------------------" << endl;
  cout << "message: " << message1 << endl;
  cout << "strlen(message1): " << lengthOfString(message1) << endl;
  cout << "sizeof(message1): " << sizeOfString(message1) << endl << endl;
  
  cout << "-------------------------------------" << endl;
  cout << "message: " << message2 << endl;
  cout << "strlen(message2): " << lengthOfString(message2) << endl;
  cout << "sizeof(message2): " << sizeOfString(message2) << endl << endl;
  
  cout << "-------------------------------------" << endl;
  cout << "strcmp(message1, message2): " << isEqual(message1, message2) << endl;
  cout << "strcmp(message1, message3): " << isEqual(message1, message3) << endl;
  cout << endl;
  
  cout << "-------------------------------------" << endl;
  cout << "strcmp(message1, message2): " << isEqualInRange(message1, message2, n) << endl;
  cout << "strcmp(message1, message3): " << isEqualInRange(message1, message3, n) << endl;
  cout << endl;
  
  char target = 's';
  const char *result = message3;
  int iterations {};
  
  while ((result = strchr(result, target)) != nullptr) {
    cout << "Found '" << target << "' starting at '" << result << "'\n";
    
    ++result;
    ++iterations;
  }
  
  return 0;
}
