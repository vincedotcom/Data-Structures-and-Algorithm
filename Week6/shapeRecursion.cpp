#include <iostream>
using namespace std;

class Recursive {
  public:
  void PrintAsterisk(int n){
    if (n == 0)
      return;
    cout << "* ";
    PrintAsterisk(n-1);
  }

  void Recursion(int n){
    if (n == 0){
      return;
    }
    PrintAsterisk(n);
    cout<< endl;
    Recursion(n-1);

    PrintAsterisk(n);
    cout<< endl;
  }

};

int main() {
  Recursive shape;
  shape.Recursion(3);
  
  return 0;
}