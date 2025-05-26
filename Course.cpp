#include "Course.h"
#include "Student.h"
#include "Grade.h"

Course::Course(){
    name = "course";
    id = 0;
}

Course::Course(std::string name, int id){
    this->name = name;
    this->id = id;
}

void Course::addPerson(Person* p){
    persons.push_back(p);
}

std::vector<Person*> Course::get_persons(){
    return persons;
}