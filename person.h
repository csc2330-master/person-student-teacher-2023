//
// Created by Carlos R. Arias on 11/6/23.
//

#ifndef PERSON_STUDENT_TEACHER_2023_PERSON_H
#define PERSON_STUDENT_TEACHER_2023_PERSON_H

#include <string>
using std::string;

class Person {
private:
    char* _name;
    unsigned int _age;
public:
    Person(const char* name, unsigned int age = 0);
    virtual ~Person();
    Person(const Person& p);
    const Person& operator=(const Person & rhs);
    // We do not need Cpy Ctr, Cpy Assgmt Op, Dtor
    virtual string ToString()const;
    unsigned int GetAge()const;
    void Birthday();
};


#endif //PERSON_STUDENT_TEACHER_2023_PERSON_H
