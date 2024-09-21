#include <iostream>
using namespace std;

class Shape {
  private:
    int n;

  public:
    void setSize(int size) {
        this->n = size;
    }

    void printStars(int n) {
      if (n == 0) {
        return;
      }

      for (int i = 0; i < n; i++) {
        cout << "*";
      }
      cout << endl;

      printStars(n - 1);

      for (int i = 0; i < n; i++) {
        cout << "*";
      }
      cout << endl;
    }
};

int main() {
  Shape shape;
  int size;

  cout << "Enter the size of the shape: ";
  cin >> size;

  shape.setSize(size);
  shape.printStars(size);

  return 0;
}
