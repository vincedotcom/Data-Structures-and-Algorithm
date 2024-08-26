#include <iostream>
using namespace std;

class Array {
public:
    int findTheLargest(int (&arrOfNum)[10]) {
      // set the initial smallest number to the idex 0 value
      int smallestNum = arrOfNum[0]; 

      // loop through the array
      for (int i = 1; i < 10; i++) { 
        // if the value of of i is less than the smallestNum which is initialized by index 0
        if (arrOfNum[i] < smallestNum) {
          smallestNum = arrOfNum[i]; // set the smallestNum to the arrOfNum, i the updated index
        }
      }

      return smallestNum; // return the smallest number in the array
    }
};

int main() {
    Array arr;

    int arrOfNum[10];

    cout << "Enter 10 numbers separated by space: ";

    for (int i = 0; i < 10; i++) {
      cin >> arrOfNum[i];
    }

    int smallestNum = arr.findTheLargest(arrOfNum);
    cout << "Smallest number is: " << smallestNum << endl;

    return 0;
}
