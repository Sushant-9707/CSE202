#include <iostream>
using namespace std;

int main(){
    // Enum > enumeration > is user defined.
    // data type that consist of integral.
    // constants and each of them is given a name.
    enum days {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

    // write a switch case to print the
    // day of the week based on the integer value (0-6)
    // where 0 is mondey and 6 is sunday.

    cout << "Enter a number (0-6) to get the day of the week: ";
    int day;    
    cin >> day;

    switch(day){
        case 0:
            cout << "Monday" << endl;
            break;
        case 1:
            cout << "Tuesday" << endl;
            break;
        case 2:
            cout << "Wednesday" << endl;
            break;
        case 3:
            cout << "Thursday" << endl;
            break;
        case 4:
            cout << "Friday" << endl;
            break;
        case 5:
            cout << "Saturday" << endl;
            break;
        case 6:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }

}
