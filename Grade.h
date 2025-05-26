#ifndef GRADE_H
#define GRADE_H

#include "Student.h"

class Grade {
    private:
        int student_id;

        std::string assignment;

        int value;
    public:
        Grade();

        Grade(std::string assignment, int value);

        int get_student_id();

        int get_course_id();

        std::string get_assignment();

        int get_value();
};

#endif