#include <iostream>
using namespace std;

struct Node {
  int Value;
  Node* Next;
};

class Operator {
  protected:
  Node* _head;
  Node* _tail;
  Node* _current;

  public:
  bool HasNext() {
    if(_tail->Next == NULL)
    return false;
  return true;
  }

  void AddNewNode(Node* newNode) {
    if(_head == NULL) {
      _head = newNode;
    } else {
      if (_head->Next == NULL) {
        _head->Next = newNode;
        _current = _head;
        _tail = newNode;
      } else {
        _tail->Next = newNode;
        _tail = newNode;
      }
    }
  }

  void printNode() {
    while (HasNext()) {
      cout << _current->Value << endl;
      _current = _current->Next;
    }
  }
};


int main() {

  Node* node1 = new Node();
  Node* node2 = new Node();


  cout << node1;
  Operator operator1;

  node1->Value = 1;

  operator1.AddNewNode(node1);

  node2->Value = 2;
  operator1.AddNewNode(node1);

  
  return 0;
}

/*
void Remove(int valueToRemove, Node* current) {
    Node* prev = nullptr;

    while (current != nullptr) {
        if (current->Value == valueToRemove) {
            if (prev == nullptr) { // Removing the first node
                current = current->Next; // Update the head of the list
            } else {
                prev->Next = current->Next;
            }
            delete current; // Free the memory
            return; // Node removed, exit the function
        }
        prev = current;
        current = current->Next;
    }
}*/