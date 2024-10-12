#include <iostream>
#include <string> // Added for using string
using namespace std;

struct Student {
    string Name;
    int ID;
};

struct Grade {
    double Math;
    double Filipino;
    double Science;
    int StudentID;
};

struct ViewModel {
    Student students[3];
    Grade grades[3];

    void PrintStudentGrades() {
        cout << "Student ID\tName\t\tMath\tFilipino\tScience\n";
        cout << "-----------------------------------------------------------\n";

        for (int i = 0; i < 3; i++) {
            cout << students[i].ID << "\t\t" << students[i].Name << "\t\t";
            // Finding the corresponding grades for the student using the StudentID
            for (int j = 0; j < 3; j++) {
                if (grades[j].StudentID == students[i].ID) {
                    cout << grades[j].Math << "\t" << grades[j].Filipino << "\t\t" << grades[j].Science << endl;
                    break;
                }
            }
        }
    }
};

int main() {
    ViewModel model;

    // Input student details
    for (int i = 0; i < 3; i++) {
        cout << "------ENTER STUDENT " << i + 1 << " DETAILS------" << endl;
        cout << "Enter Student ID: ";
        cin >> model.students[i].ID;
        cout << "Enter Student Name: ";
        cin >> model.students[i].Name;
    }

    cout << endl;

    // Input grades and student IDs
    for (int i = 0; i < 3; i++) {
        cout << "-----ENTER GRADES FOR STUDENT " << i + 1 << "-----" << endl;
        cout << "Enter Grade in MATH: ";
        cin >> model.grades[i].Math;
        cout << "Enter Grade in FILIPINO: ";
        cin >> model.grades[i].Filipino;
        cout << "Enter Grade in SCIENCE: ";
        cin >> model.grades[i].Science;
        cout << "Enter Student ID (to link grades): ";
        cin >> model.grades[i].StudentID; // Ensures grades are associated with the correct student
    }

    // Print student grades
    model.PrintStudentGrades();

    return 0;
}
