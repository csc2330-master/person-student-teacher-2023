//
// Created by Carlos R. Arias on 11/6/23.
//

#include "person.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;


Person::Person(const string &name, unsigned int age): _name(name), _age(age) {

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
