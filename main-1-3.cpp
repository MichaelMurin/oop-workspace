#include "University.h"
#include "Student.h"

int main(){
    University daUni = University("Orky Boyz Studiez", "WAAAGH");
    daUni.addCourse(100,"Smashin' Gitz");
    std::vector<Course> daCourses = daUni.get_courses();
    Student *git = new Student("Tinny",1);
    daCourses[0].addPerson(git);
    Gradebook daBook = Gradebook();
    daBook.addGrade(1,1234,"assign 1",90);
    daBook.addGrade(1,1234,"assign 2",100);
    daBook.addGrade(1,1234,"assign 3",110);
}