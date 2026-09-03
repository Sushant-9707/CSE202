#include <iostream>
using namespace std;

class Counter{
    private:
    int value;

    public:
    Counter(){value = 0;}
    Counter& increment()
    {
        value++;
        return *this;
    }
    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main(){
    Counter c;
    c.increment().increment();
    c.display();
    return 0;
}