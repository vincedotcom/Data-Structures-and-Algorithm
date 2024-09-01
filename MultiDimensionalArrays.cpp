#include <iostream>
using namespace std;

int main() {
/*
  int test[3][2] = {{2, -5},
                    {4, 0},
                    {9, 1}};

  for (int i = 0; i < 3; i++) {

    for (int j = 0; j < 2; j++) {
      cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
    }
  }

 int numbers[2][3];

 cout << "Enter 6 numbers: "<< endl;

 // Storing user input in the array
 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    cin >> numbers[i][j];
  }
 } 

 cout << "The numbers are: " << endl;

 // Printing array elements
 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    cout << "numbers["<<i<<"]["<<j<<"]: " << numbers[i][j] << endl;

  }
 }


  int n, range;
  
  cout << "Enter an Integer: ";
  cin >> n;

  cout << "Enter range: ";
  cin >> range;

  for (int i = 0; i <= range; i++) {
    cout << n << " * " << i << " = " << n * i << endl;
  }


  int test[2][3][4] = {
    { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
    { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
  };
*/
  int test[2][3][2] = {
  {
    {1, 2},
    {3, 4},
    {5, 6}
    },
  {
    {7, 8},
    {9, 10},
    {11, 12}
  }
  };

 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    for (int k = 0; k < 2; k++) {
      cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
    }
  }
 }
  return 0;
}














