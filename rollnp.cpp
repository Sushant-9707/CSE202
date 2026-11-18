#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollno;
        //add marks array which will be initiallized by constructornn
        int* marks;
        int numSubjects;
    public:
        Student(string n, int r, int numSub) : name(n), rollno(r), numSubjects(numSub) {
            marks = new int[numSubjects];
            cout << "Student object created" << endl;
        }
    void display() const{
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl; 
        
    }
    ~Student() {
        cout << "Student object destroyed" << endl;
        delete[] marks;
    }

};

int main() {
    Student s1("John Doe", 101, 5);
    s1.display();
    return 0;
}