#include <iostream>
using namespace std;

void quickieSort(int arr[], int low, int high){
  if (low >= high) {
    return;
  }

  int start = low;
  int end = high;

  int mid = start + (end - start) / 2;

  int pivot = arr[mid];

  while (start <= end) {
    while (arr[start] < pivot){
      start++;
    }
    while (arr[end] > pivot) {
      end--;
    }
    if (start <= end) {
      int temp = arr[end];
      arr[end] = arr[start];
      arr[start] = temp;
      start++;
      end--;
    }
  }

  quickieSort(arr, low, end);
  quickieSort(arr, start, high);

} 

int main() {

  int arr[] = {5, 4, 3, 2, 1};

  int size = sizeof(arr)/sizeof(arr[0]);

  quickieSort(arr, 0, size-1);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  return 0;
}