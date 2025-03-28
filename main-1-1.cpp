#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main() {
    Person *arrayJohnDoe = createPersonArray(4);
    for (int i = 0; i < 4; i++) {
        cout << arrayJohnDoe[i].name << " " << arrayJohnDoe[i].age << endl;
    }
    delete[] arrayJohnDoe;
    return 0;
}
