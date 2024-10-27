#include <iostream>
using namespace std;

struct Node {
    int Value;
    Node* Next;
};

void RemoveNode(Node*& head, int toRemove) {
    if (head == nullptr) {
        return;
    }

    if (head->Value == toRemove) {
        head = head->Next;
        return;
    }

    
    Node* current = head;
    while (current->Next != nullptr) {
        if (current->Next->Value == toRemove) {
            current->Next = current->Next->Next; 
            return;
        }
        current = current->Next;
    }
}

int main() {
    Node* Node1 = new Node();
    Node* Node2 = new Node();
    Node* Node3 = new Node();
    Node* Node4 = new Node();

    Node1->Value = 1;
    Node1->Next = Node2;
    Node2->Value = 2;
    Node2->Next = Node3;
    Node3->Value = 3;
    Node3->Next = Node4;
    Node4->Value = 4;
    Node4->Next = nullptr;

    cout << "Original list: ";
    Node* current = Node1;
    while (current != nullptr) {
        cout << current->Value << " ";
        current = current->Next;
    }
    cout << endl;

		int toRemove;

		cout << "What value would you like to remove? "<< endl;
		cin >> toRemove;

    RemoveNode(Node1, toRemove);

    cout << "List after removing node with value " << toRemove << ": ";
    current = Node1;
    while (current != nullptr) {
        cout << current->Value << " ";
        current = current->Next;
    }
    cout << endl;
    return 0;
}