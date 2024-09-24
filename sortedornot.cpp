#include <iostream>
using namespace std;


bool isSorted(int arr[], int n, int const size) {
  if (n == size-1){
    return true;
  }

  return arr[n] <= arr[n+1] && isSorted(arr, n+1, size);
}

int main() {

  int arr[] = {1, 2, 3, 4, 5};

  int n = sizeof(arr) / sizeof(arr[0]);
  int const size = sizeof(arr) / sizeof(arr[0]);

  cout << isSorted(arr, 0, size);
  return 0;
}