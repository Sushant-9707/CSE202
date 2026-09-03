#include <iostream>

using namespace std;
//

class mystring {
public:

    char s[30];

    mystring() {
        cout << "Enter the string: ";
        cin >> s;
    }

    void displaystr() {
        cout << s << endl;
    }

    void find(char a) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == a) {
                cout << "Found character at index " << i << endl;
            }
        }
    }

    char* data() {
        return s;
    }

    int compare(const char a[]) {

        int i = 0;

        while (s[i] != '\0' || a[i] != '\0') {

            if (s[i] != a[i]) {
                cout << "Not same" << endl;
                return 0;
            }

            i++;
        }

        cout << "Same" << endl;
        return 1;
    }
};


int main() {

    mystring s1;

    s1.displaystr();

    s1.find('s');

    mystring s2;

    s1.compare(s2.data());

    return 0;
}