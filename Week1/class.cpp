#include <iostream> // input output library
#include <string> // string library
#include <iomanip> // set precesision 
#include <algorithm> // to lower the string
#include <cctype> 

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

// this function is used to validate if the parameter contains digit
// loops through the string character and compare it to the last character in a string
// return a boolean value true or false

bool containsDigits(const string& s) { // reference parameter to name and major as s
  return find_if(s.begin(), s.end(), ::isdigit) != s.end();
}

int main() {
  float gpa, tuition;
  string name, major, loweredStudentMajor;

  StudentRec aStudent; // declare a new datatype called studentRec as aStudent

  // check if the name is valid
  // does not contain numeric input
  while (true) {
    cout << "Enter Student Name: ";
    getline(cin, name); // getline use to input value with space or two words

    if (containsDigits(name)) {
      cout << "Input valid name!!!";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // the parameter suggest that ignore the streamsize up to the creation of new line
    } else {
      break;
    }
  }

  while (true) {
    cout << "Enter Student Major: ";
    getline(cin, major);

    if (containsDigits(major)) {
      cout << "Input valid major!!!";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      break;
    }
  }

  // check if the gpa input only contains float
  while (true) {
    cout << "Enter Student GPA: ";
    cin >> gpa;

    if(!cin.fail()) {
      break; 
    } else {
      cout << "Invalid input enter a numeric value!!!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
  }

  while (true) {
    cout << "Enter Student Tuition: ";
    cin >> tuition;

    if (!cin.fail()) {
      break;
    } else {
      cout << "Invalid input enter a numeric value!!!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }

  
  aStudent.setStudentData(name, major, gpa, tuition); // push the data to aStudent

  loweredStudentMajor = aStudent.returnStudentMajor(); 
  transform(loweredStudentMajor.begin(), loweredStudentMajor.end(), loweredStudentMajor.begin(), ::tolower); // transform to lowercase 

  // return the student's name and the gpa if the student course/program is computer science
  if (loweredStudentMajor == "computer science") {
    cout << aStudent.returnStudentName() <<"'s GPA is "<<fixed<<setprecision(1) << aStudent.returnStudentGPA(); 
  } else { // if not computer science return or display to the screen the student's tuition
    cout <<"Students Tuition is $"<<fixed<< setprecision(2) << aStudent.returnStudentTuition(); // set precision is used to set the number of zero after decimal point
  }

  return 0;
}