#include <iostream>
using namespace std;


struct Node{
  int Value;
  Node* Next;

};

void PrintDataInNode(Node* current) {
  while (current != nullptr) {
    cout << current->Value << " "; 
    current = current->Next;
  }
}

void PrintEveryOtherNode(Node* current) {
  while (current != nullptr) {
    cout << current->Value << " "; 
    current = current->Next;
    current = current->Next;

  }
}

void PrintInReverse(Node* current) {
  if (current == nullptr) {
    return;
  }
  PrintInReverse(current->Next); 
  cout << current->Value << " ";
  
}

void InsertHeadNode(Node** current) {
  Node* newHead = new Node();
  newHead->Next = *current;
  newHead->Value = 0;
  *current = newHead;
}

/*
void PrintInReverse(Node* current) {
  if (current == nullptr) { // Base case: stop when reaching the end
    return; 
  }
  PrintInReverse(current->Next); // Recursively print the rest of the list first
  std::cout << current->data << " "; // Print the current node's data
}*/

int main() {

  Node* head = new Node();
  
  Node* node2 = new Node();
  Node* node3 = new Node();

  Node* tail = new Node();

  head->Value = 1;
  head->Next = node2;

  node2->Value = 2;
  node2->Next = node3;

  node3->Value = 3;
  node3->Next = tail;

  tail->Value = 4;
  tail->Next = nullptr;

// PrintDataInNode(head); 
//cout << endl;

  PrintInReverse(head);
  cout << endl;

  PrintEveryOtherNode(head);
  cout << endl;

  cout << "what?? " <<head << endl; // this is the address of actual node created in the heap
  cout << &head << endl; // this is the address of the head pointer

  InsertHeadNode(&head);
  

/*
 Node* current = head;
  while (current != nullptr) {
    cout << current->Value << " "; 
    current = current->Next;
  }
*/
 
  return 0;
}