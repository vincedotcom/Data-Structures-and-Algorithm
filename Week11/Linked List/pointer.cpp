#include <iostream>
using namespace std;

int main() {

  int number = 10;
  int *ptr = &number;

  // get the address
  cout << ptr;
  cout << endl;
  cout << *ptr;

  return 0;
}