#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    // Update read function with exception handling
    void read(Records &records) {
        _file.open(_filename, ios::in);

        if (_file.is_open())
        { 
            string line;
            while (getline(_file, line)) {
                for (int i = 0; i < line.size(); i++) {
                    if (isdigit(line[i])) {
                        _file.close();
                        throw std::out_of_range("character error");
                    }
                }
                int value = stoi(line);
                records.push_back(value);
            } 
            _file.close();
        }
    }
};

int main(int argc, char* argv[]) {
    Records myRecords;

    string filename = "records.txt";

    if (argc > 1) filename = argv[1];

    RecordsManager recordM(filename); 
        
    //recordM.read(myRecords);
    try{
        recordM.read(myRecords);
    }catch(std::out_of_range const& e){
        std::cerr << e.what() << "\n";
    }

    int sum = 0;
    for (int i = 0; i < myRecords.size(); i++) {
        sum += myRecords[i];
    }
    cout << sum << endl;



    return 0;
}
