#include "Gradebook.h"
#include "Grade.h"
#include <iostream>

int main(){
    Gradebook daBook = Gradebook();
    daBook.addGrade(1884670,1234,"assign 1",90);
    std::vector<Grade> daGrade = daBook.get_grades();
    std::cout << "Student ID:" << daGrade[0].get_student_id() <<
    "\nCourse ID:" << daGrade[0].get_course_id() <<
    "\nAssignment:" << daGrade[0].get_assignment() <<
    "\nValue:" << daGrade[0].get_value() << std::endl;
}