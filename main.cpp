#include "person.h"
#include "student.h"
#include "teacher.h"

#include <iostream>

using std::cout;
using std::endl;
// https://github.com/csc2330-master/person-student-teacher-2023
void PrintPerson(Person& p);

int main() {
    Person a("Charly");
    Student b("Joe", 17);
    Teacher c("Jenny", 32, "Science");

    cout << a.ToString() << endl;       // Name: Charly Age: 0
    cout << b.ToString() << endl;       // Name: Joe Age: 17 GPA: 0.0
    cout << c.ToString() << endl;       // Name: Jenny Age: 32 Subject: Science

    PrintPerson(a);                   // Name: Charly Age: 0
    PrintPerson(b);                   // Name: Joe Age: 17 GPA: 0.0
    PrintPerson(c);                   // Name: Jenny Age: 32 Subject: Science

    return 0;
}

void PrintPerson(Person& p){
    cout << p.ToString() << endl;
}
