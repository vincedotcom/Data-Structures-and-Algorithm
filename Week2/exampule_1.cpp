#include <iostream>
using namespace std;

int main() {

  int num = 20;  // actual variable declaration
  int *ptr; // pointer variable 
  ptr = &num; // can access the value and also the address

  
  cout << ptr << endl; // the address
  cout << *ptr; // the value
  
  return 0;
}m