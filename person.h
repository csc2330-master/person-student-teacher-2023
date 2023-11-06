//
// Created by Carlos R. Arias on 11/6/23.
//

#ifndef PERSON_STUDENT_TEACHER_2023_PERSON_H
#define PERSON_STUDENT_TEACHER_2023_PERSON_H

#include <string>
using std::string;

class Person {
private:
    string _name; // Composition == "has-a" relationship
    unsigned int _age;
public:
    Person(const string& name, unsigned int age = 0);
    // We do not need Cpy Ctr, Cpy Assgmt Op, Dtor
    string ToString()const;
    unsigned int GetAge()const;
    void Birthday();
};


#endif //PERSON_STUDENT_TEACHER_2023_PERSON_H
