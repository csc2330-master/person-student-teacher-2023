//
// Created by Carlos R. Arias on 11/6/23.
//

#include "student.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Student::Student(const string& name, unsigned int age, double gpa):Person(name, age), _gpa(gpa) {

}

double Student::GetGpa() const {
    return _gpa;
}

void Student::SetGpa(double gpa) {
    _gpa = gpa;
}

string Student::ToString() const {
    stringstream ss;
    ss << Person::ToString() << " GPA: " << _gpa;
    return ss.str();
}
