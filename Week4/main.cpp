#include <iostream>
using namespace std;

class multiplicationTable {
  private:
  int r;
  int c;

  public:

  void setRows(int rows) {
    r = rows;
  }

  void setColumns(int columns) {
    c = columns;
  }

  void printTheTable() {
   cout << endl << endl << endl;
    for (int i = 1; i <= r; i++ ) {
      for (int j = 1; j <= c; j++) {
        cout << "\t" <<i*j;
      }
      cout << endl;
    }
  }
};

int main() {

  multiplicationTable table1;
  int rows, columns;

  cout << "Enter a Row and Columns separated by space: ";
  cin >> rows >> columns;
 
  table1.setRows(rows);
  table1.setColumns(columns);
  table1.printTheTable();
  return 0;
}