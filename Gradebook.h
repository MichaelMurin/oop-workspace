#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"
#include <vector>

class Gradebook {
    private:
        std::vector<Grade> grades;
    public:
        Gradebook();

        void addGrade(int stud_id, int course_id, std::string assignment, int value);

        std::vector<Grade> get_grades();
};

#endif