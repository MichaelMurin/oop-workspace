#ifndef COURSE_H
#define COURSE_H

#include "Student.h"
#include "Grade.h"
#include <vector>

class Course {
    private:
        std::string name;

        int id;

        std::vector<Person*> persons;
    public:
        Course();

        Course(std::string name, int id);

        void addPerson(Person* p);

        std::vector<Person*> get_persons();
};

#endif