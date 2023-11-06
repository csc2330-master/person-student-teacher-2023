#include "person.h"
#include "student.h"
#include "teacher.h"

#include <iostream>

using std::cout;
using std::endl;

void PrintPerson(Person p);

int main() {
    Person a("Charly");
    Student b("Joe", 17);
    Teacher c("Jenny", 32, "Science");

    cout << a.ToString() << endl;
    cout << b.ToString() << endl;
    cout << c.ToString() << endl;

    PrintPerson(a);
    PrintPerson(b);
    PrintPerson(c);

    return 0;
}

void PrintPerson(Person p){
    cout << p.ToString() << endl;
}
