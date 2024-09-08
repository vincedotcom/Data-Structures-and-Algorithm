#include <iostream>
using namespace std;

int main() {
  int arr[5];
  cout << "Enter 5 digit number: ";
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  for (int j = 0; j < 5; j++) {
    cout << arr[j];
  }

  return 0;
}