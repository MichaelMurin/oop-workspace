#include "University.h"

University::University(){
    name = "university";
    location = "location";
}

University::University(std::string name, std::string location){
    this->name = name;
    this->location = location;
}

void University::addCourse(int id, std::string name){
    Course newCourse = Course(name,id);
    courses.push_back(newCourse);
}

Gradebook* University::get_gradebook(){
    return gradebook;
}

std::vector<Course> University::get_courses(){
    return courses;
}