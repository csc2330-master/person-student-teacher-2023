//
// Created by Carlos R. Arias on 11/6/23.
//

#include "teacher.h"

#include <string>
#include <cstring>
#include <sstream>

using std::string;
using std::stringstream;

Teacher::Teacher(const char* name, unsigned int age, const char* subject)
:Person(name, age){
    _subject = new char[strlen(subject) + 1];
    strcpy(_subject, subject);
}

string Teacher::GetSubject() const {
    return _subject;
}

string Teacher::ToString() const {
    stringstream ss;
    ss << Person::ToString() << " Subject: " << _subject;
    return ss.str();
}

Teacher::~Teacher() {
    delete[] _subject;
}

Teacher::Teacher(const Teacher &t):Person(t) {
    _subject = new char[strlen(t._subject) + 1];
    strcpy(_subject, t._subject);
}

const Teacher &Teacher::operator=(const Teacher &rhs) {
    Person::operator=(rhs);
    delete[] _subject;
    _subject = new char[strlen(rhs._subject) + 1];
    strcpy(_subject, rhs._subject);
    return *this;
}
