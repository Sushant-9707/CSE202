#include <iostream>
using namespace std;

class book{
    public:
    string bookname;
    string author;
    int price;
    void show(){
        cout << "Book Name: " << bookname << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

};

int main(){
    book obj1 = {"The Great Gatsby", "F. Scott Fitzgerald", 10};
    obj1.show();
    book obj2 = {"To Kill a Mockingbird", "Harper Lee", 12};
    obj2.show();
    book obj3 = {"1984", "George Orwell", 15};
    obj3.show();
    return 0;
}
