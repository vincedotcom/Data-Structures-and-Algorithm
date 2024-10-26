#include <iostream>
using namespace std;


void swap(int* a, int* b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;

}

int main() {

  // variable declaration
  int a = 5;
  int b = 10;
  cout << a << " " << b << endl;


  swap(&a, &b);

  cout << a << " " << b;

  // input 


  // output

  return 0;
}