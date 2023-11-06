//
// Created by Carlos R. Arias on 11/6/23.
//

#include "teacher.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Teacher::Teacher(const string &name, unsigned int age, const string &subject)
:Person(name, age), _subject(subject){

}

string Teacher::GetSubject() const {
    return _subject;
}

string Teacher::ToString() const {
    stringstream ss;
    ss << Person::ToString() << " Subject: " << _subject;
    return ss.str();
}
