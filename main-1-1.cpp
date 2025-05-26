#include "Person.h"
#include "Course.h"
#include "Instructor.h"
#include "Student.h"
#include <iostream>

int main(){
    Student* Seb = new Student("Seb",1884670);
    Instructor* DrV = new Instructor("Dr.V");
    Course oop("OOP",1234);
    oop.addPerson(Seb);
    oop.addPerson(DrV);
    std::vector<Person*> duo = oop.get_persons();
    std::cout << "Name of Student:" << duo[0]->get_name() << std::endl;
    Student* newSeb = static_cast<Student*>(duo[0]);
    std::cout << "Id of Student:" << newSeb->get_id() << std::endl;
    std::cout << "Name of Instructor:" << duo[1]->get_name() << std::endl;
    return 0;
}