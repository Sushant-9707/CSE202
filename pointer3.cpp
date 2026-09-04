#include <iostream>
using namespace std;

int main(){
    
    int x = 10;
    int *p = &x;
    int *q = p;
    *q = 50;
    cout << x << " " << *p << " " << *q << endl;

    return 0;
}