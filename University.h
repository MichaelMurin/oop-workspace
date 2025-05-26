#include <string>
#include "Gradebook.h"
#include "Course.h"

class University {

      private: 
         std::string name;

         std::string location;

         Gradebook* gradebook;

         std::vector<Course> courses;
      public:
        University();

        University(std::string name, std::string location);

        void addCourse(int id, std::string name);

        Gradebook* get_gradebook();

        std::vector<Course> get_courses();
};