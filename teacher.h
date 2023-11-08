//
// Created by Carlos R. Arias on 11/6/23.
//

#ifndef PERSON_STUDENT_TEACHER_2023_TEACHER_H
#define PERSON_STUDENT_TEACHER_2023_TEACHER_H

#include "person.h"

class Teacher : public Person {
private:
    char* _subject;
public:
    Teacher(const char* name, unsigned int age, const char* subject);
    ~Teacher();
    Teacher(const Teacher& t);
    const Teacher& operator=(const Teacher& rhs);
    string GetSubject()const;
    virtual string ToString()const;
};


#endif //PERSON_STUDENT_TEACHER_2023_TEACHER_H
