#include <iostream>
#include "Orchestra.h"
#include "Musician.h"

using namespace std;

int main() {
    Orchestra schoolBand = Orchestra(5);
    schoolBand.add_musician(Musician("Violin",5));
    schoolBand.add_musician(Musician("Trumpet",7));
    schoolBand.add_musician(Musician("Guitar",4));
    schoolBand.add_musician(Musician("Piano",2));
    cout << "There are currently " << schoolBand.get_current_number_of_members() << " members." << endl;
    cout << boolalpha;
    cout << "There are trumpets: " << schoolBand.has_instrument("Trumpet") << endl;
    Musician *members = schoolBand.get_members();
    for (int i = 0; i < schoolBand.get_current_number_of_members(); i++) {
        cout << members[i].get_instrument() << " " << members[i].get_experience() << endl;
    }
    return 0;
}