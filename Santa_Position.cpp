#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    char bracket;
    int level = 0;
    int bPosition = 0;  
    int pos = 0;

    // Opening file for reading it
    ifstream infile(argv[1]);
    if (!infile.is_open()) {
        cerr << "Error: Can't open the file " << argv[1] << endl;
        return 1;
    }

    // Reading each character from the file
    while (infile.get(bracket)) {
        if (bracket == '(') {
            level++;
        } else if (bracket == ')') {
            level--;
        }

        pos++;

        // Checking for basement(negative value -1)
        if (level == -1) {
            bPosition = pos;
            break;
        }
    }

    infile.close();

    // Output the result
    if (bPosition != 0) {
        cout << "Santa enters the basement at position: " << bPosition << endl;
    } else {
        cout << "Santa never enters the basement." << endl;
    }

    return 0;
}
