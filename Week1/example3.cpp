#include <iostream>
#include <string>
using namespace std;

class StudentClass {
private:
  string name;
  int regNo, sub1, sub2, sub3;
  float total, avg;

public:
  void read() {
    cout << "Enter Name :";
    // what is getline?
    getline (cin, name);

    cout << "Enter Registration Number :";
    cin >> regNo;

    cout << "Enter Marks for Subject 1, 2 and 3 :";
    cin >> sub1 >> sub2 >> sub3;

    // what is this?
    cin.ignore();
  }
  void sum() {
    total = sub1 + sub2 + sub3;
    avg = total / 3;
  }

  void print() {
    cout << "Name :" << name << endl;
    cout << "Registration Number :" << regNo << endl;
    cout << "Marks :" << sub1 << " , " << sub2 << " , " << sub3 << endl;
    cout << "Total :" << total << endl;
    cout << "Average :" << avg << endl; 
  }

};


int main() {
  StudentClass stu1, stu2;

  cout << "read and Print Student Information Class Example Program in C++\n";

  cout << "\nStudentClass : Student 1" << endl;
  stu1.read();
  stu1.sum();
  stu1.print();

  cout << "\nStudentClass : Student 2" << endl;
  stu2.read();
  stu2.sum();
  stu2.print();
  
  return 0;
}