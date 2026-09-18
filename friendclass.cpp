//create a friend method to access private members of a class

#include <iostream>
using namespace std;

class abc{
    private:
        int age;
    public:
        friend void display(abc a);
        friend void setAge(abc &a, int age);
};

void display(abc a){
    cout << a.age << endl;
}

void setAge(abc &a, int age){
    a.age = age;
}

int main(){
    abc obj;
    setAge(obj, 25);
    display(obj);
    return 0;
}