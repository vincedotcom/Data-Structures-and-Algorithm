#include <iostream>
using namespace std;


void incrementPointer(int* p){
  *p++;
}

int main() {

  // variable declaration
  int x = 5;
  int* p = &x;


  incrementPointer(p);

  cout << x;
  // input 


  // output

  return 0;
}