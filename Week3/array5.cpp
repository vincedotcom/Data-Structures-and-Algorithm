#include <iostream>
using namespace std;

class Array {
public:
  int findTheMostOccurred(int (&arrOfNum)[10]) {
    int mostOccurredCounter = 0;
    int mostOccurredValue = arrOfNum[0];

    for (int i = 0; i < 10; i++) { 
      int indexCounter = 0;
        for (int j = 0; j < 10; j++){
          if (arrOfNum[i] == arrOfNum[j]) {
            indexCounter++;
          }
        }
        if (indexCounter > mostOccurredCounter){
          mostOccurredCounter = indexCounter;
          mostOccurredValue = arrOfNum[i];
        }
        }
    return mostOccurredValue; 
  }
};

int main() {
    Array arr;
    int arrOfNum[10];

    cout << "Enter 10 numbers separated by space: ";
    for (int i = 0; i < 10; i++) {
      cin >> arrOfNum[i];
    }

    int mostOccurred = arr.findTheMostOccurred(arrOfNum);

    cout << "Most occurred number is: " << mostOccurred;

    return 0;
}