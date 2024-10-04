#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
  string full_name;
  // int ID;
  string major;
  // int year;
  // float GPA;
  // string courses[3];
};

int main() {
  Student student[2];

  string green = "\033[32m";
  string reset = "\033[0m";

  for (int i = 0; i < 2; i++) {
    cout << "Enter your Full name: ";
    getline(cin, student[i].full_name);
    cout << "Enter Student major: ";
    getline(cin, student[i].major);

    cout << endl;
  }


  cout << left;
  cout << green << setw(20)<< "Name" << setw(20)<< "Major" << reset <<  endl;

  for (int i = 0; i < 2; i++) {
    cout << setw(20) << student[i].full_name <<
            setw(20) << student[i].major << endl;
  }

  return 0;
}