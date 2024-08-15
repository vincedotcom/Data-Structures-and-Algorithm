#include <iostream>
#include <string> 
#include <iomanip> 
#include <algorithm> 

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
  string name, major, loweredStudentMajor;

  StudentRec aStudent; // declare a new datatype called studentRec as aStudent

  cout << "Enter Student Name: ";
  getline(cin, name); 

  
  cout << "Enter Student Major: ";
  getline(cin, major);

  // check if the gpa input only contains float

  cout << "Enter Student GPA: ";
  cin >> gpa;

  cout << "Enter Student Tuition: ";
  cin >> tuition;

  
  aStudent.setStudentData(name, major, gpa, tuition); // push the data to aStudent

  loweredStudentMajor = aStudent.returnStudentMajor(); 
  transform(loweredStudentMajor.begin(), loweredStudentMajor.end(), loweredStudentMajor.begin(), ::tolower); // transform to lowercase 

  // return the student's name and the gpa if the student course/program is computer science
  // if not computer science return or display to the screen the student's tuition
  if (loweredStudentMajor == "computer science") {
    cout << aStudent.returnStudentName() <<"'s GPA is "<<fixed<<setprecision(1) << aStudent.returnStudentGPA(); 
  } else { 
    cout <<"Students Tuition is $"<<fixed<< setprecision(2) << aStudent.returnStudentTuition(); 
  }

  return 0;
}