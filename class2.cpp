#include <iostream>
#include <string>
using namespace std;

class mystring{
    public:

    string s;
    
    mystring(){
        cout << "Enter the string";
        cin >> s;
    }

    void displaystr(){
        cout << s << endl;
    }
};


int main(){

    mystring os;

    os.displaystr();


}