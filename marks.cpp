//take marks input from the user and find sum of all marks with pointer array

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;
    int** marks = new int*[n];

    for(int i = 0; i < n; ++i) {
        marks[i] = new int; 
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> *marks[i];
    }

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += *marks[i];
    }

    cout << "Total marks: " << sum << endl;

    for(int i = 0; i < n; ++i) {
        delete marks[i]; 
    }
    delete[] marks; 

    return 0;
}