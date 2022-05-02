//
//  Person.cpp
//  constructors
//
//  Created by Raul Max on 01/05/22.
//

#include "Person.h"

Person::Person(std::string lastName, std::string firstName, int age)
: lastName(lastName), firstName(firstName), age(new int(age)) {
}

Person::Person(std::string lastName)
: Person(lastName, "", 0) {
}

Person::Person(const Person& p)
: Person(p.getLastName(), p.getFirstName(), *(p.getAge())) {
}

Person::~Person() {
  delete age;
}

void Person::printInfo() {
  std::cout << "Person at: " << this << std::endl;
  std::cout << "[ Last name: " << lastName << std::endl;
  std::cout << "First name: " << firstName << std::endl;
  std::cout << "Age: " << *age << std::endl;
  std::cout << "Age address: " << age;
  std::cout << " ]" << std::endl;
}

int* Person::getAge() const {
  return age;
}

void Person::setAge(int age) {
  *(this->age) = age;
}

std::string Person::getFirstName() const {
  return firstName;
}

void Person::setFirstName(std::string name) {
  firstName = name;
}

std::string Person::getLastName() const {
  return lastName;
}

void Person::setLastName(std::string name) {
  lastName = name;
}
