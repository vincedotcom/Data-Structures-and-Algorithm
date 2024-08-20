#include <iostream>
using namespace std;

void change(int& num) {
  num = 1;
}

int main() {

  int num = 10;

  cout << change(num);
  



  return 0;
}