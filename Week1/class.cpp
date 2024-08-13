#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class StudentRec {
  private:
    string studentName, studentMajor;
    float studentGPA, studentTuition;

  public:
    void setStudentData(string name, string major, float gpa, float tuition) {
      studentName = name;
      studentMajor = major;
      studentGPA = gpa;
      studentTuition = tuition;
    }

    string returnStudentName() {
      return studentName;
    }

    string returnStudentMajor() {
      return studentMajor;
    }

    float returnStudentGPA() {
      return studentGPA;
    }

    float returnStudentTuition() {
      return studentTuition;
    }
};

int main() {
  float gpa, tuition;
  string name, major;

  StudentRec aStudent;

  cout << "Enter Student Name: ";
  getline(cin, name);

  cout << "Enter Student Major: ";
  getline(cin, major);

  cout << "Enter Student GPA: ";
  cin >> gpa;

  cout << "Enter Student Tuition: ";
  cin >> tuition;

  aStudent.setStudentData(name, major, gpa, tuition);


  if (aStudent.returnStudentMajor() == "Computer Science") {
    cout << aStudent.returnStudentName() <<"'s GPA is "<<fixed<<setprecision(1) << aStudent.returnStudentGPA(); 
  } else {
    cout <<"Students Tuition is $"<<fixed<< setprecision(2) << aStudent.returnStudentTuition();
  }

  return 0;
}