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

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; ++i) {
        cout << "----Enter the data for employee No." << i + 1 << "----"<< endl;
        cout << "Enter the ID: ";
        cin >> employees[i].id;
        cout << "Enter the Name: ";
        cin >> employees[i].name;
        cout << "Enter the house number:  ";
        cin >> employees[i].house_num;
        cout << "Enter the area: ";
        cin >> employees[i].area;
        cout << "Enter the City: ";
        cin >> employees[i].city;
        cout << "Enter the State: ";
        cin >> employees[i].state;
    }


    int searchID;
    cout << "Enter employee ID to display the details: ";
    cin >> searchID;

    bool found = false;
    for (int i = 0; i < 3; ++i) {
        if (employees[i].id == searchID) {
          
            cout << "Name: " << employees[i].name << endl;
            cout << "Address: " << employees[i].house_num << "," << employees[i].area << ", " << employees[i].city<< ", "<< employees[i].state<< ", ";
            found = true;
            break;
        }
    }


    if (!found) {
        cout << "Employee with ID " << searchID << " not found." << endl;
    }

    return 0;
}
