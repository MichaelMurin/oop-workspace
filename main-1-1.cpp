#include <iostream>
#include "Musician.h"

using namespace std;

int main() {
    Musician muse1 = Musician();
    Musician muse2 = Musician("Violin", 1);
    Musician muse3 = Musician("Piano", 10);

    cout << "I have played " << muse1.get_instrument() << " for " << muse1.get_experience() << " years." << endl;
    cout << "I have played " << muse2.get_instrument() << " for " << muse2.get_experience() << " years." << endl;
    cout << "I have played " << muse3.get_instrument() << " for " << muse3.get_experience() << " years." << endl;
    return 0;
}
