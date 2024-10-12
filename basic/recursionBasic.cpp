#include <iostream>
using namespace std;

void recursion(int n) {
  if (n == 0) {
    return;
  }
  cout << "hello \n";
  recursion(n-1);

}



int main() {
  // Removed cout << n; as n is not declared.
  recursion(5);
  return 0;
}
