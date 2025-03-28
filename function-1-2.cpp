#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    Person* array = new Person[n];
    for (int i = 0; i < n; i++) {
        array[i] = (Person){"Jane Doe", 1};
    }
    PersonList list = (PersonList){array, n};
    return list;
}