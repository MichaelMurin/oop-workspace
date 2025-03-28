#include <iostream>
#include "Person.h"

Person* createPersonArray(int n) {
    Person* array = new Person[n];
    for (int i = 0; i < n; i++) {
        array[i] = (Person){"John Doe", 0};
    }
    return array;
}