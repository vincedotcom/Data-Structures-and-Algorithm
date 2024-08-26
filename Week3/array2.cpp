#include <iostream>
using namespace std;

class Array {
public:
    int findTheLargest(int (&arrOfNum)[10]) {
      // set the initial largest number to the idex 0 value
      int largestNum = arrOfNum[0]; 

      // loop through the array
      for (int i = 1; i < 10; i++) { 
        // if the value of of i is greater than the largestNum which is initialized by index 0
        if (arrOfNum[i] > largestNum) {
          largestNum = arrOfNum[i]; // set the largestNum to the arrOfNum, i the updated index
        }
      }

      return largestNum; // return the largest number in the array
    }
};

int main() {
    Array arr;

    int arrOfNum[10];

    cout << "Enter 10 numbers separated by space: ";

    for (int i = 0; i < 10; i++) {
        cin >> arrOfNum[i];
    }

    int largestNumber = arr.findTheLargest(arrOfNum);
    cout << "Largest number is: " << largestNumber << endl;

    return 0;
}
