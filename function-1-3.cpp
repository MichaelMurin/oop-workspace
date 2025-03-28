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

PersonList deepCopyPersonList(PersonList pl) {
    Person* copyArray = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++) {
        copyArray[i] = (Person){pl.people[i].name, pl.people[i].age};
    }
    PersonList copy = (PersonList){copyArray,pl.numPeople};
    return copy;
}