#include <iostream>
using namespace std;

class Array {
private:
  int smallestNumber;
  int largestNumber;

public:
    void findTheLargestAndSmallest(int (&arrOfNum)[10]) {
      int smallestNum = arrOfNum[0]; 
      int largestNum = arrOfNum[0];
    
      for (int i = 1; i < 10; i++) { 
        if (arrOfNum[i] < smallestNum) {
          smallestNum = arrOfNum[i]; 
        } else if (arrOfNum[i] > largestNum) {
          largestNum = arrOfNum[i];
        }
      }
      smallestNumber = smallestNum;
      largestNumber = largestNum;
    }

    int returnTheLargest() {
      return largestNumber;
    }
    int returnTheSmallest() {
      return smallestNumber;
    }
};

int main() {
    Array arr;
    int arrOfNum[10];

    cout << "Enter 10 numbers separated by space: ";
    for (int i = 0; i < 10; i++) {
      cin >> arrOfNum[i];
    }


    arr.findTheLargest(arrOfNum);
    int smallestNum = arr.returnTheSmallest();
    int largestNum = arr.returnTheLargest();
    cout << "Smallest number is: " << smallestNum << " and the largest is " << largestNum << endl;

    return 0;
}