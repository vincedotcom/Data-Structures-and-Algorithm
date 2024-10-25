#include <iostream>
using namespace std;

void message1();

void message1(int n) {
  if (n == 0) {
    return;
  }
  cout << "hello world\n";
  message1(n-1);
}

int main() {

  message1(5);

  return 0;
}