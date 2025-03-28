#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main() {
    PersonList listJohnDoe = createPersonList(4);
    for (int i = 0; i < listJohnDoe.numPeople; i++) {
        cout << listJohnDoe.people[i].name << " " << listJohnDoe.people[i].age << endl;
    }
    cout << "Number of people is: " << listJohnDoe.numPeople << endl;
    delete[] listJohnDoe.people;
    return 0;
}
