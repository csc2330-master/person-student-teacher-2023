//
// Created by Carlos R. Arias on 11/6/23.
//

#include "person.h"

#include <string>
#include <cstring>
#include <sstream>

using std::string;
using std::stringstream;


Person::Person(const char* name, unsigned int age):  _age(age) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
}

string Person::ToString() const {
    stringstream ss;
    ss << "Name: " << _name << " Age: " << _age;
    return ss.str();
}

unsigned int Person::GetAge() const {
    return _age;
}

void Person::Birthday() {
    _age++;
}

Person::~Person() {
    delete[] _name;
}

Person::Person(const Person &p): _age(p._age) {
    _name = new char[strlen(p._name) + 1];
    strcpy(_name, p._name);
}

const Person &Person::operator=(const Person &rhs) {
    delete[] _name;
    _name = new char[strlen(rhs._name) + 1];
    strcpy(_name, rhs._name);

    return *this;
}
