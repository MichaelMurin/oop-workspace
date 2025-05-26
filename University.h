#include <string>
#include "Gradebook.h"
#include "Course.h"

class University {

      private: 
         std::string name;

         std::string location;

         Gradebook* gradebook;
      public:
         void addCourse(int id, std::string name);

         Gradebook* get_gradebook();

         std::vector<Course> get_courses();
};