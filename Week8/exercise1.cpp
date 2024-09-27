#include <iostream>
#include <iomanip>  
using namespace std;

struct Manufacturer {
    string name;
    string country;
};


struct Car {
    string model;
    Manufacturer manufacturer;
    float price;
};

int main() {
  
    Car cars[3];


    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for car " << i + 1 << ":\n";
        
   
        cout << "Model: ";
        cin.ignore();  
        getline(cin, cars[i].model);


        cout << "Manufacturer Name: ";
        getline(cin, cars[i].manufacturer.name);
        cout << "Manufacturer Country: ";
        getline(cin, cars[i].manufacturer.country);

  
        cout << "Price: ";
        cin >> cars[i].price;
        
        cout << endl;
    }


    cout << left;  
    cout << setw(15) << "Model" 
         << setw(20) << "Manufacturer" 
         << setw(15) << "Country" 
         << setw(10) << "Price" << endl;

    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < 3; ++i) {
        cout << setw(15) << cars[i].model 
             << setw(20) << cars[i].manufacturer.name 
             << setw(15) << cars[i].manufacturer.country 
             << setw(10) << fixed << setprecision(2) << cars[i].price << endl;
    }

    return 0;
}
