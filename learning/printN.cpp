#include <iostream>
using namespace std;


int printNumber(int n);


int main() {
  printNumber(5);
  return 0;
}

int printNumber(int n){

  if (n <= 0) {
    cout << 
  }
  cout << n << endl;
  return printNumber(n+1);
}

