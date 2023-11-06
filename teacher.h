//
// Created by Carlos R. Arias on 11/6/23.
//

#ifndef PERSON_STUDENT_TEACHER_2023_TEACHER_H
#define PERSON_STUDENT_TEACHER_2023_TEACHER_H

#include "person.h"

class Teacher : public Person {
private:
    string _subject;
public:
    Teacher(const string& name, unsigned int age, const string& subject);
    // We don't need... you know
    string GetSubject()const;
    string ToString()const;
};


#endif //PERSON_STUDENT_TEACHER_2023_TEACHER_H
