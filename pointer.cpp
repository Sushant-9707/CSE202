#include <iostream>
using namespace std;

class Car{
    public:
    string model;
    void start()
    {
        cout << "Car started!" << endl;
    }
};

int main(){
    int x = 10;
    int *ptr = &x;
    
    Car c;
    Car* cp = &c;

    c.start();
    (*cp).start();

    cp -> start();

    return 0;
}