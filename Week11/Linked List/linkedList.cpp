#include <iostream>
using namespace std;

struct Node {
    int Value;
    Node* Next;
    Node* Prev;
};

int main() {
    Node* head = new Node();
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    // Initialize nodes
    head->Value = 1;
    head->Next = node1;
    head->Prev = node3; 

    node1->Value = 2;
    node1->Next = node2;
    node1->Prev = head;

    node2->Value = 3;
    node2->Next = node3; 
    node2->Prev = node1;

    node3->Value = 4;
    node3->Next = head; 
    node3->Prev = node2;

    Node* current = head; 

    bool isRunning = true;
    while (isRunning) { 
        cout << "Value: " << current->Value << endl;
        cout << "Do you want to see Next or Prev?" << endl;
        cout << "Press 1 for Next" << endl;
        cout << "Press 2 for Prev" << endl;
        cout << "Press 3 to Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            current = current->Next;
        } else if (choice == 2) {
            current = current->Prev;
        } else if (choice == 3) {
            isRunning = false;
        } else {
            cout << "Invalid choice. Please run the program again." << endl;
            isRunning = false;
        }
    }

    return 0;
}