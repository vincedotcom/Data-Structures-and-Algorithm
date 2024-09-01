#include <iostream>
using namespace std;

int main() {

  // 1. simple done 
  // 2. oop

  int rows, columns;

  cout << "Enter a Row and Columns separated by space: ";
  cin >> rows >> columns;

  cout << endl << endl << endl;
  for (int i = 1; i <= rows; i++ ) {
    for (int j = 1; j <= columns; j++) {
      cout << "\t" <<i*j;
    }
    cout << endl;
  }

  return 0;
}