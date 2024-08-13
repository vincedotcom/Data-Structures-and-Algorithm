#include <iostream>
using namespace std;

class person {
	
	// Acess - Specifier
public: // it can be access in other class
	string name;
	int number;
};

int main() {
	person obj;
	
	cout << "Enter the Name : ";
	cin >> obj.name;
	
	cout << "Enter the Numbe : ";
	cin >> obj.number;
	
	cout << obj.name << ": " << obj.number << endl;
	return 0;
}
