//write a code to print an element using recurtion

#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout << n << " ";
}

int main(){
    cout << "Enter number: ";
    int n;
    cin >> n;
    print(n);
    return 0;
}