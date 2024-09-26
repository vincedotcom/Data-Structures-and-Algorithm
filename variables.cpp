#include <iostream>
using namespace std;


int main() {

  int a = 5;
  int b = 4;
  int temp;

  temp = b;
  b = a;
  a = temp;
 

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << temp << endl;

  

  return 0;
}