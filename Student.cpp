#include "Person.h"
#include "Student.h"

Student::Student(): Person(){
    id = 0;
};

Student::Student(std::string name, int id): Person(name){
    this->id = id;
}

int Student::get_id(){
    return id;
}