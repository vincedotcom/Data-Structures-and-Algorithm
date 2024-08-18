#include <iostream>
using namespace std;

void cubeByReference ( int *);

int main() {

  int number = 5;

  cout << &number << endl;

  
  cout << number << endl;

  cubeByReference (&number);

  cout << number;

  // output

  return 0;
}

void cubeByReference(int *n_pointer) {
  *n_pointer = *n_pointer * *n_pointer * *n_pointer;
}