#include <iostream>
using namespace std;

int main() {

  // variable declaration
  int num = 10; // regular variable declaration
  int *pointer; // declare the pointer variable

  pointer = &num; // access the address

  cout << num << endl;
  cout << pointer << endl;
  cout << *pointer;

  return 0;
}