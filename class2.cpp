#include <iostream>
using namespace std;

class mystring{
    public:

    char s[30];
    int n = sizeof(s)/sizeof(s[0]);
    
    mystring(){
        cout << "Enter the string: ";
        cin >> s;
    }

    void displaystr(){
        cout << s << endl;
    }

    void find(char a){
        for(int i = 0; i < n; i++){
            if(s[i] == a){
                cout << "Found character at index " << i << endl;
            }
        }
    }
};


int main(){

    mystring os1;

    os1.displaystr();
    os1.find('s');

    mystring os2;


    return 0;


}