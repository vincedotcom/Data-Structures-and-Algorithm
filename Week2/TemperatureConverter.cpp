#include <iostream>
using namespace std;

class Temperature_Converter {
public:
    
    // Method used to change the value of the fahrenheit through reference
    void Convert_Celsius_to_Fahrenheit(const int &celsius_value, int &fahrenheit) {
        fahrenheit = celsius_value * 32; 
    }

    // Method used to change the value of celsius 
    void Convert_Fahrenheit_to_Celsius(const int &fahrenheit_value, int &celsius) {
        celsius = fahrenheit_value / 32;
    }
};

int main() {
    Temperature_Converter converter; 
    int celsius, fahrenheit;

    cout << "Enter Celsius: ";
    cin >> celsius;
    const int celsius_value  = celsius; // const variable to lock the value of celsius for computation purpose


    cout << "Enter Fahrenheit: ";
    cin >> fahrenheit;
    const int fahrenheit_value = fahrenheit; // const variable to lock the value of fahrenheit that is initially inputted by the user and cannot be change by other function or reference 

    // convert the constant value of celsius to the fahrenheit
    converter.Convert_Celsius_to_Fahrenheit(celsius_value, fahrenheit);
    cout << celsius_value << " degree Celsius is equivalent to " << fahrenheit << " degree Fahrenheit" << endl;

    // convert the initial value of fahrenheit to celsius
    converter.Convert_Fahrenheit_to_Celsius(fahrenheit_value, celsius);
    cout << fahrenheit_value << " degree Fahrenheit is equivalent to " << celsius << " degree Celsius" << endl;

    return 0;
}
