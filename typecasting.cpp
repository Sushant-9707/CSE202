#include <iostream>
using namespace std;

// create a class temperature
class Temperature {
private:
    double celsius;

public:
    Temperature(double temp) : celsius(temp) {}

    double getCelsius() const {
        return celsius;
    }

    double getFahrenheit() const {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temperature temp(25.0); 
    cout << "Celsius: " << temp.getCelsius() << endl;
    cout << "Fahrenheit: " << temp.getFahrenheit() << endl;
    return 0;
}