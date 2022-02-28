//
//  main.cpp
//  color_information
//
//  Created by Raul Max on 27/02/22.
//

#include <iostream>

using namespace std;

constexpr unsigned int RED_MASK {0xFF000000};
constexpr unsigned int GREEN_MASK {0x00FF0000};
constexpr unsigned int BLUE_MASK {0x0000FF00};
constexpr unsigned int ALPHA_MASK {0x000000FF};

void parseColor(unsigned int color) {
  cout << dec << showbase << endl;
  cout << "Red: " << ((color & RED_MASK) >> 24) << endl;
  cout << "Green: " << ((color & GREEN_MASK) >> 16) << endl;
  cout << "Blue: " << ((color & BLUE_MASK) >> 8) << endl;
  cout << "Alpha: " << ((color & ALPHA_MASK) >> 0) << endl;
}

int main(int argc, const char * argv[]) {
  
  unsigned int color1 {0xAABCDE00};
  parseColor(color1);

  return 0;
}
