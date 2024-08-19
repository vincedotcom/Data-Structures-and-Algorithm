#include <iostream>
using namespace std;

class Temperature_Converter {
  public:
    float Convert_Celsius_to_Fahrenheit(float celsius) {
      return celsius * 32;
    }

    float Convert_Fahrenheit_to_Celsius(float fahrenheit) {
      return fahrenheit / 32;
    }

  
};

int main() {
  float celsius, fahrenheit;

  Temperature_Converter temperature1;

  cout << "Enter Celsius: ";
  cin >> celsius;

  cout << "Enter Fahrenheit: ";
  cin >> fahrenheit;

  cout << celsius<< " degree is equivalent to " << temperature1.Convert_Celsius_to_Fahrenheit(celsius) << " Fahrenheit" << endl;
  cout << fahrenheit << " fahrenheit is equivalent to " << temperature1.Convert_Fahrenheit_to_Celsius(fahrenheit) << " Degree Celsius" << endl;
  return 0;
}