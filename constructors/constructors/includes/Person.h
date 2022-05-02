//
//  Person.h
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>

class Person {
public:
  Person() = default;
  Person(std::string lastName, std::string firstName, int age);
  Person(std::string lastName);
  Person(const Person& person);
  ~Person();
  
  void printInfo();
  std::string getLastName() const;
  std::string getFirstName() const;
  int* getAge() const;
  void setFirstName(std::string name);
  void setLastName(std::string name);
  void setAge(int age);
  
private:
  std::string lastName;
  std::string firstName;
  int* age;
};

#endif /* Person_h */
