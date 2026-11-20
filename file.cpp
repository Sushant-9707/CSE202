#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;

    fout.open("student.txt");
    fout << "Hello world" << endl;
    fout.close();

    return 0;
}