#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollno;
    public:
        Student(string n, int r) : name(n), rollno(r) {
            cout << "Student object created" << endl;
        }
    void display() const{
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
    ~Student() {
        cout << "Student object destroyed" << endl;
    }

};

int main() {
    Student s1("John Doe", 101);
    s1.display();
    return 0;
}