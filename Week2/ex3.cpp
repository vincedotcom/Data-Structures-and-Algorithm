#include <iostream>
using namespace std;

int cubeByValue( int );

int main() {

  int number = 5;

  cout << number <<endl;

  number = cubeByValue( number );

  cout << number << endl;
}

int cubeByValue( int n) {
  return n * n * n;
}