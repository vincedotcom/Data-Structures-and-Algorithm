#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* link;

  Node(int data) {
    this->data = data;
    this->link = nullptr;
  }
};

void traverseList(Node* head) {
  Node* current = head;
  while(current != nullptr) {
    cout << current->data << " ";
    current = current->link;
    // example current is 0x1
    // current->link is the address of the next node
  }
}

/*
Algorithm 
special case
1. head
2. tail

- if list is empty return nullptr
- 
- if target delete is 2
  - loop, check if 
  - add counter 
  - if 1 or head, delete
    if only one node return nullptr and delete node head
  - so the counter add first before checking 
  - if counter is equal target
  - add prev node pointing 
*/

Node* removePosition(Node* head, int position) {
  Node* current = head;

  if (position == 1) {
    delete head;
    return nullptr;
  }

  int counter = 2;
  while (current!=nullptr) {
    
    if (counter == position) {
      current->link = current->link->link->link;
      // delete current->link->link;
      return head;
    }
    counter++;
    current = current->link;
  }


  
}

int main() {
  Node* head = new Node(5);
  head->link = new Node(10);
  head->link->link = new Node(15);
  head->link->link->link = new Node(20);
  head->link->link->link->link = new Node(20);
  head->link->link->link->link->link = new Node(21);

  traverseList(removePosition(head, 4));

  return 0;
}