#include "Grade.h"
#include "Gradebook.h"

Gradebook::Gradebook(){
}

void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
    Grade grade(stud_id, course_id, assignment, value);
    grades.push_back(grade);
}

std::vector<Grade> Gradebook::get_grades(){
    return grades;
}