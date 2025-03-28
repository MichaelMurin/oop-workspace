#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    PersonList listJohnDoe = createPersonList(4);
    for (int i = 0; i < listJohnDoe.numPeople; i++) {
        cout << listJohnDoe.people[i].name << " " << listJohnDoe.people[i].age << endl;
    }
    cout << "Number of people is: " << listJohnDoe.numPeople << endl;
    PersonList copyDoe = deepCopyPersonList(listJohnDoe);
    delete[] listJohnDoe.people;
    cout << "The copy of the list: " << endl;
    for (int i = 0; i < copyDoe.numPeople; i++) {
        cout << copyDoe.people[i].name << " " << copyDoe.people[i].age << endl;
    }
    cout << "Number of people is: " << copyDoe.numPeople << endl;
    delete[] copyDoe.people;
    return 0;
}
