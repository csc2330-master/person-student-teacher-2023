//
// Created by Carlos R. Arias on 11/6/23.
//

#ifndef PERSON_STUDENT_TEACHER_2023_STUDENT_H
#define PERSON_STUDENT_TEACHER_2023_STUDENT_H

#include "person.h"

class Student: public Person {
private:
    double _gpa;
public:
    Student(const string& name, unsigned int age, double gpa=0.0);
    // We don't need cpy ctor, dtor, cpy assgmt operator
    double GetGpa() const;
    void SetGpa(double gpa);
    string ToString()const;
};


#endif //PERSON_STUDENT_TEACHER_2023_STUDENT_H
