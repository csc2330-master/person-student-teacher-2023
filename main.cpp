#include "person.h"
#include "student.h"
#include "teacher.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
// https://github.com/csc2330-master/person-student-teacher-2023
void PrintPerson(Person& p);
void AnotherOneBitesTheDust(Person p);
int main() {
    vector<Person*> people;
    people.push_back(new Person("Charly"));
    people.push_back(new Student("Joe", 17));
    people.push_back(new Teacher("Jenny", 32, "Science"));
    people.push_back(new Student("Kylie", 16));
    people.push_back(new Person("Agamenon"));
    people.push_back(new Student("Allie", 21));
    people.push_back(new Teacher("George", 32, "Math"));
    people.push_back(new Teacher("John", 32, "Art"));
    people.push_back(new Student("Betty", 22));

    for (Person* p : people) {
        Student* s = dynamic_cast<Student*>(p);
        if (s != nullptr){
            s->SetGpa(3.5);
        }
    }

    for (int i = 0; i < people.size(); ++i) {
        cout << people[i]->ToString() << endl;
    }
    for (int i = 0; i < people.size(); ++i) {
        PrintPerson(*people[i]);
    }
    for (Person* p : people) {
        cout << p->ToString() << endl;
    }
    AnotherOneBitesTheDust(*people[2]);
    Person q(*people[0]);
    for (int i = 0; i < people.size(); ++i) {
        delete people[i];
    }
    return 0;
}

void PrintPerson(Person& p){
    cout << p.ToString() << endl;
}
void AnotherOneBitesTheDust(Person p){
    cout << p.ToString() << endl;
}
