#include <iostream>
using namespace std;


class AdditionClass {
private:
	int num1, num2, result;
	
public:
	void read() {
		cout << "Enter Number 1 :";
		cin >> num1;
		
		cout << "Enter Number 2 :";
		cin >> num2;
		
	}
	
	void sum() {
		result = num1+num2;
	}
	
	void print() {
		cout << "Result :" << num1 << " + " << num2 << " = " << result << endl;
	}
	
};


int main() {
	
	AdditionClass obj1, obj2;
	
	cout << "Simple Class Addition : Add Two Integers in C++\n";
	
	cout << "\nAdditionClass : obj1 Usage " << endl;
	obj1.read();
	obj1.sum();
	obj1.print();
	
	cout << "\nAdditionClass : obj2 Usage " << endl;
	obj2.read();
	obj2.sum();
	obj2.print();
	
	return 0;
		
}
