#include <iostream>
using namespace std;

class Temperature_Converter {
  public:
    float Convert_Celsius_to_Fahrenheit(float celsius) {
      return celsius * 32;
    }

  
};

int main() {
  float celsius;

  Temperature_Converter temperature1;

  cout << "Enter Celsius: ";
  cin >> celsius;

  cout << celsius<< " degree is equivalent to " << temperature1.Convert_Celsius_to_Fahrenheit(celsius) << " Fahrenheit" << endl;
  
  return 0;
}