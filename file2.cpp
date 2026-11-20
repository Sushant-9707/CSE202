#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream fin;

    fin.open("student.txt");
    string l;
    getline(fin, l);
    cout << l << endl;
    fin.close();

    return 0;
}