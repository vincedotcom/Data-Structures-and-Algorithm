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
    void setStudentData(string name, string major, float gpa,
float tuition) {
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

    cout << "Enter";
    getline(cin, name);

    cout << "Enter";
    getline(cin, major);

    while (true) {
        cout << "Enter ";
        cin >> gpa;

        if (!cin.fail()) {
            break;
        } else {
            cout << "Invalid Input. Enter a numeric value for" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),
            '\n');
        }
    }   

    while (true) {
        cout << "Enter";
        cin >> tuition;

        if (!cin.fail()) {
            break;
        } else {
              cout << "nvalid Input. Enter a numeric value for " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),
            '\n');

    aStudent.setStudentData(name, major, gpa, tuition);

    string studentMajor = aStudent.returnStudentMajor();
    transform(studentMajor.begin(), studentMajor.end(),
    studentMajor.begin(), ::tolower);

    if (studentMajor == "compute science") {
        cout << aStudent.returnStudentName() << " 's GPA is " 
             << fixed << setprecision(1) << 
    aStudent.returnStudentGPA() << endl;
    } else {
        cout << "The"
             << fixed << setprecision(2) <<
    aStudent.returnStudentTuition() << endl;
    }   
  
    return 0;


        }
    }

}
