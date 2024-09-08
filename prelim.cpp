#include <iostream>
using namespace std;

class Array {
  public:
    int returnSmallest(int arr[10]) {
      int smallestNum = arr[0];

      for (int k = 0; k < 10; k++ ){
        if (arr[k] < smallestNum)
          smallestNum = arr[k];
      }
      return smallestNum;
      }

    int returnSecondSmallest(int arr[10]) {
      int smallestNum = returnSmallest(arr);
      int secondSmallest;

      for (int j = 0;j < 10; j++) {
        if (smallestNum != arr[j] && arr[j] < secondSmallest) {
          secondSmallest = arr[j];
        }
      }
      return secondSmallest;
    } 

};

int main() {

  Array arrayOne;

  int arr[10];

  cout << "Enter 10 num: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }

  int smallestNum =  arrayOne.returnSmallest(arr);

  cout << "Second smallest number is: " << arrayOne.returnSecondSmallest(arr);

 return 0; 
}