#include <iostream>
using namespace std;

class findMe {
  public:
  // use reference for memory efficiency to not duplicate the array
  void findTheNumber(int (&arr)[10], int numberToFind) {

    bool isPresent = false; // this is a checker for the loop if missing number found in the array
    for (int i = 0; i < 10; i++) { // loop through the array
      if (numberToFind == arr[i]) { // if the number is found or equal to the missing number
        isPresent = true;   // we update the isPresent bool value to true
        break;  // then break the loop so that the iteration will stop 
      }
    }
    if (isPresent) { // if the checker is true 
      cout << "The number is Present";  // print this
    } else {
      cout << "The number is NOT Present"; // if not, print this
    }
  }
};


int main() {

  // declare a variable called findThisNum 
  // findMe datatype
  findMe findThisNum;

  int numbers[10];
  int numberToFind;

  // ask the user for numbers then stored it in an array using for loop
  cout << "Enter 10 numbers separated by space: " << endl;

  for (int i = 0; i < 10; i++) {
    cin >> numbers[i];
  }

  // ask the user the number they want to find
  cout << "Enter a number to find: "<< endl;
  cin >> numberToFind;

  // call the method from findMe 
  // pass the numbers entered by the user and the numberToFind
  // as the parameter
  findThisNum.findTheNumber(numbers, numberToFind);
  
  return 0;
}