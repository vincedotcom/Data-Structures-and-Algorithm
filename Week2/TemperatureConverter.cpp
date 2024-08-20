#include <iostream>
using namespace std;

class Temperature_Converter {
public:
    void Convert_Celsius_to_Fahrenheit(int& celsius, int& fahrenheit) {
        fahrenheit = celsius * 32; 
    }

    void Convert_Fahrenheit_to_Celsius(int& fahrenheit, int& celsius) {
        celsius = fahrenheit / 32;
    }
};

int main() {
    Temperature_Converter converter;
    int celsius, fahrenheit;

    cout << "Enter Celsius: ";
    cin >> celsius;

    cout << "Enter Fahrenheit: ";
    cin >> fahrenheit;

    converter.Convert_Celsius_to_Fahrenheit(celsius, fahrenheit);
    cout << celsius << " degree celsius is equivalent to " << fahrenheit << " fahrenheit" << endl;

    converter.Convert_Fahrenheit_to_Celsius(fahrenheit, celsius);
    cout << fahrenheit << " fahrenheit is equivalent to " << celsius << " degree celsius" << endl;

    return 0;
}
