#include <iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;
    void parameter(){
        cout << "Parameter of rectangle: " << 2 * (length + breadth) << endl;
    }
    void area(){
        cout << "Area of rectangle: " << length * breadth << endl;
    }
};

int main(){
    rectangle obj1;
    cout << "Enter lengh of rectangle: ";
    int l;
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    int b;
    cin >> b;
    obj1.length = l;
    obj1.breadth = b;
    obj1.parameter();
    obj1.area();
}