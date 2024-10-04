#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40}; // Initializing a list with some values
    list<int> nums = {10, 20, 30, 40};

    nums.push_back(50);

    // Adding elements to the list
    myList.push_back(50);  // Adds 50 to the end
    myList.push_front(5);  // Adds 5 to the front

    // Iterating over the list
    cout << "List elements: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    // Removing elements from the list
    myList.pop_back();   // Removes the last element
    myList.pop_front();  // Removes the first element

    // Inserting an element in the middle
    auto it = myList.begin();
    advance(it, 2); // Move the iterator to the third position
    myList.insert(it, 25); // Insert 25 at the third position

    // Displaying the modified list
    cout << "Modified list elements: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
