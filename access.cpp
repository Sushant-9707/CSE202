#include <iostream>
#include <vector>
using namespace std;

class Students{
    private:
    string name;
    int reg_no;

    public:
    Students(){
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the registration: ";
        cin >> reg_no;
        cout << endl;
        cout << "New entry added with following details" << endl << "Name: " << 
        name << endl << "Registration number: " << reg_no << endl;
        cout << endl;
    }
    void display(){
        cout << "Name: " << name << " | " << "Regisration number: " << reg_no << endl;
    }

};

int main(){
    vector<Students> student;
    while(true){
        
        cout << "______________________________" << endl;
        cout << "select one of these: " << endl;
        cout << "1. New student" << endl;
        cout << "2. List students" << endl;
        cout << "3. Remove student" << endl;
        cout << "4. Exit" << endl;
        cout << "______________________________" << endl;
        cout << endl;
        cout << "Choose one of the options: ";
        int c;
        cin >> c;

        if(c == 1){
            Students s;
            student.push_back(s);
        }
        else if(c == 2){
            if(student.size()==0){
                cout << "No students available" << endl;
            }
            else{
            for(int i = 0; i < student.size(); i++){
                cout << "Serial number: " << i + 1 << " | ";
                student[i].display();
            }
            }
        }

        else if(c == 3){
            cout << "Enter the serial number of the student: ";
            int n;
            cin >> n;
            student.erase(student.begin() + (n-1));
        }
        else if(c == 4){
            break;
        }
        else{
            cout << "Choose correct option" << endl;
        }

        
    }
}