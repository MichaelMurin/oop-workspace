#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    Person* array = new Person[n];
    for (int i = 0; i < n; i++) {
        array[i] = (Person){"John Doe", 1};
    }
    PersonList list = (PersonList){array, n};
    return list;
}

PersonList shallowCopyPersonList(PersonList pl) {
    Person *copyArray = pl.people;
    PersonList copy = (PersonList){copyArray,pl.numPeople};
    return copy;
}