#include <iostream>
using namespace std;

int main() {

  int a = 7;
  int *a_pointer = &a;

  cout << &a << endl;
  cout << a_pointer << endl;

  cout << a << endl;
  cout << *a_pointer;

  return 0;
}

