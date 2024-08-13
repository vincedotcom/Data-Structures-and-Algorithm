#include <iostream>
#include <string>

using namespace std;

// create a class named Tesla
class Tesla {
  public:
    // create a variable  Gasoline tank
    float GasolineTank;

    // method that can be use outside the class to assign a value in the variable that i created
    void refuel(float newGasoline) {
      GasolineTank = newGasoline;
    }

    // function to return the gas level
    float getGasolineLevel() {
      return GasolineTank;
    }
};

int main() {
  // create a new variable with the Tesla type
  Tesla myClass;

  // call the method and assign a new value
  myClass.refuel(12.5);

  // print the gas level in the terminal
  cout << myClass.getGasolineLevel();
}