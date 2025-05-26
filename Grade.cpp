#include "Grade.h"
#include "Student.h"
#include "Course.h"

Grade::Grade(){
    assignment = "assignment";
    value = 50;
}

Grade::Grade(int student_id, int course_id, std::string assignment, int value){
    this->student_id = student_id;
    this->course_id = course_id;
    this->assignment = assignment;
    this->value = value;
}

int Grade::get_student_id(){
    return student_id;
}

int Grade::get_course_id(){
    return course_id;
}

std::string Grade::get_assignment(){
    return assignment;
}

int Grade::get_value(){
    return value;
}