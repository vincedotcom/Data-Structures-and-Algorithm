#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
  bool swapped;
  for (int i = 0; i < size; i++) {
    swapped = false;
    for (int j = 0; j < size - 1 - i; j++) {
      if (arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp; 
        swapped = true;
      }
    }
    if (swapped == false) {
      break;
    }
  }
}

int main() {
  int arr[] = {5, 2, 3, 4, 1, -1, 9, 0, 100, -30};

  int size = sizeof(arr)/sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}