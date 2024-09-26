#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
  if (low >= high) {
    return;
  }

  int start = low;
  int end = high;
  int mid = start + (end - start) / 2;

  int pivot = arr[mid];

  while (start <= end) {
    while (arr[start] < pivot) {
      start++;
    }

    while (arr[end] > pivot) {
      end--;
    }

    if (start <= end) {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp; 
      start++;
      end--;
    }
  }

  quickSort(arr, low, end);
  quickSort(arr, start, high);

}

int main() {

  int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(arr)/sizeof(arr[0]);

  quickSort(arr, 0, size - 1);

  for (int i = 0; i < size; i++) {
    cout << arr[i] <<" ";
  }

  return 0;
}