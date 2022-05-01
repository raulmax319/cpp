//
//  main.cpp
//  concepts
//
//  Created by Raul Max on 01/05/22.
//

#include <iostream>

using namespace std;

// compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
  {a + b} noexcept -> convertible_to<int>;
};

template <typename T>
concept Tiny = requires(T t) {
    sizeof(T) < 4; // simple requirement, it only enforces syntax
    requires sizeof(T) < 4;
};

template <Tiny T>
T tinySum(T a, T b) {
    return a + b;
};

template <typename T>
concept MyIntegral = is_integral_v<T>;

template <typename T>
concept Multiplicable = requires(T a, T b) {
  a * b; // just make sure the syntax is valid
};

template <typename  T>
concept Incrementable = requires(T a) {
  a += 1;
  ++a;
  a++;
};

template <MyIntegral T>
T subtract(T a, T b) {
  return a - b;
}

template <typename T>
requires Multiplicable<T>
T multiply(T a, T b) {
  return a * b;
}

//template <typename T>
//requires std::integral<T>
//T add(T a, T b) {
//  return a + b;
//}

template <std::integral T>
T add(T a, T b) {
  return a + b;
}

template <typename T>
requires integral<T> || floating_point<T>
T sum2(T a, T b) {
  return a + b;
}

//auto add(std::integral auto a, std::integral auto b) {
//  return a + b;
//}
//
//template <typename T>
//T add(T a, T b) requires std::integral<T> {
//  return a + b;
//}

int main(int argc, const char * argv[]) {
  
  int num1 {2};
  int num2 {3};
  
  string hello {"Hello"};
  string world {"World!"};
  
  char h {30};
  char w {56};
  
  auto sum = add(num1, num2);
  //  auto result = multiply(hello, world);
//  auto result = tinySum(num1, num2);
  auto result = tinySum(h, w);
  
  cout << result << endl;
  
  cout << "Hello, World! " << static_cast<int>(sum) << endl;
  return 0;
}
