#include <iostream>
#include <string> 
#include <iomanip> 

using namespace std;

class StudentRecord {
  private:
    string Name, Major;
    float GPA;
    double Tuition;

  public:
    void setStudentData(string name, string major, float gpa, float tuition) {
      Name = name;
      Major = major;
      GPA = gpa;
      Tuition = tuition;
    }
   string returnStudentName() {
      return Name;
    }

    string returnStudentMajor() {
      return Major;
    }

    float returnStudentGPA() {
      return GPA;
    }

    float returnStudentTuition() {
      return Tuition;
    }
};

int main() {
  float gpa, tuition;
  string name, major, loweredMajor;

  StudentRecord aStudent; // declare a new datatype called studentRec as aStudent

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

  

  // return the student's name and the gpa if the student course/program is computer science
  // if not computer science return or display to the screen the student's tuition
  if (aStudent.returnStudentMajor() == "Computer Science") {
    cout << aStudent.returnStudentName() <<"'s GPA is "<<fixed<<setprecision(1) << aStudent.returnStudentGPA(); 
  } else { 
    cout <<"Students Tuition is $"<<fixed<< setprecision(2) << aStudent.returnStudentTuition(); 
  }

  return 0;
}