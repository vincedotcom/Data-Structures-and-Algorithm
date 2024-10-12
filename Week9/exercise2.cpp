#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    int house_num;
    string area;
    string city;
    string state;
};

struct ViewModel {
  Employee Employees[3];

  void ShowEmployeeDetails(int searchID) {
  bool found = false;
    for (int i = 0; i < 3; ++i) {
        if (Employees[i].id == searchID) {
          
            cout << "Name: " << Employees[i].name << endl;
            cout << "Address: " << Employees[i].house_num << "," << Employees[i].area << ", " << Employees[i].city<< ", "<< Employees[i].state<< ", ";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee with ID " << searchID << " not found." << endl;
    }

  }
};

int main() {
    // Employee employees[3];
    ViewModel ViewModel;

    for (int i = 0; i < 3; ++i) {
        cout << "----Enter the data for employee No." << i + 1 << "----"<< endl;
        cout << "Enter the ID: ";
        cin >> ViewModel.Employees[i].id;
        cout << "Enter the Name: ";
        cin >> ViewModel.Employees[i].name;
        cout << "Enter the house number:  ";
        cin >> ViewModel.Employees[i].house_num;
        cout << "Enter the area: ";
        cin >> ViewModel.Employees[i].area;
        cout << "Enter the City: ";
        cin >> ViewModel.Employees[i].city;
        cout << "Enter the State: ";
        cin >> ViewModel.Employees[i].state;
    }

    int searchID;
    cout << "Enter employee ID to display the details: ";
    cin >> searchID;

    ViewModel.ShowEmployeeDetails(searchID);

    
    return 0;
}
