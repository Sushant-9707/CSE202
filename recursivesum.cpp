//sum of n natural number

#include <iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);    
}

int main(){
    int i;
    cout << "Enter: ";
    cin >> i;
    cout << sum(i) << endl;
}