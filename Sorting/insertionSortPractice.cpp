#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j > 0; j--) {
      if (arr[j] < arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {5, 4, 3, 2, 1};

  int size = sizeof(arr)/sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " "<< endl;
  }

  return 0;
}