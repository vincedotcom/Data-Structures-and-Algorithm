#include <iostream>
using namespace std;

int main() {

  // variable declaration
  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "The numbers are: ";

  // Printing array elements 
  // using range based for loop 
  for (const int &n : numbers) {
    cout << n << " ";
  }

  cout << "\nThe numbers are: ";
  // Using traditional for loop
  for (int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
  }
  return 0;
}