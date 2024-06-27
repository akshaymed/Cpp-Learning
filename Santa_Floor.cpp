#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    char bracket;
    int level = 0;

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
    }

    infile.close();

    // Output the result
    cout << "Santa ends up on floor: " << level << endl;

    return 0;
}
