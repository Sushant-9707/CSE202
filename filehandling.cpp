#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outFile("output.txt");
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    outFile << "Hello, World!" << endl;
    outFile << "This is a test file." << endl;

    outFile.close();

    ifstream inFile("output.txt");
    if (!inFile) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}