//
//  utils.cpp
//  C-string_manipulation
//
//  Created by Raul Max on 21/04/22.
//

#include <cstring>
#include "utils.h"

size_t lengthOfString(const char *str) {
  return strlen(str);
}

int sizeOfString(const char* value) {
  return sizeof(value);
}

/*
 == 0 means same string
  < 0 means the first character that does not match in str1
      comes before the character in str2
  > 0 means the first character that does not match in str1
      comes after the character in str2
 */
bool isEqual(const char * str1, const char * str2) {
  return strcmp(str1, str2) == 0 ? true : false;
}

/*
 == 0 means same string
 < 0 means the first character that does not match in str1
 comes before the character in str2
 > 0 means the first character that does not match in str1
 comes after the character in str2
 */
bool isEqualInRange(const char* str1, const char* str2, size_t& n) {
  return strncmp(str1, str2, n) == 0 ? true : false;
}
