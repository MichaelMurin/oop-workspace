#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(){
    name = "Person";
}

Person::Person(std::string name){
    this->name = name;
}

std::string Person::get_name(){
    return name;
}