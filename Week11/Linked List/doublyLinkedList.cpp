#include <iostream>
using namespace std;

struct LinkedList {
  
  struct Node {
  int data;

  Node* prev;

  Node* next;

  Node(int d) {
    data = d;
    prev = next = nullptr;
  }
};

void forwardNodeTraversal(Node* head) {
  Node* current = head;

  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
 
}

void backwardNodeTraversal(Node* tail) {
  Node* current = tail;

  while (current != nullptr) {
    cout << current->data << " ";
    current = current->prev;
  }
  cout << endl;
}

int findLength(Node* head) {
  Node* current = head;
  int length = 0;

  // while (current != nullptr)
  // {
  //   length++;
  //   current = current->next;
  // }

  for(current; current != nullptr; current = current->next) {
    length++;
  }

  return length;
  
}

Node* insertBegin(Node* head, int data) {
  if (head == nullptr) {
    return head;
  }
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
  head->prev = newNode;
  return head;
}

Node* insertEnd(Node* head, int data) {
  Node* newLastNode = new Node(data);

  if (head == NULL) {
    head = newLastNode;
  } else {
    Node* current = head;
    while(current->next != nullptr) {
    current = current->next;
  }
    current->next = newLastNode;
    newLastNode->prev = current;

  }
  
  return head;

}
};



int main() {
  LinkedList myList;
  LinkedList::Node* head = new LinkedList::Node(1);
  LinkedList::Node* second = new LinkedList::Node(2);
  LinkedList::Node* third = new LinkedList::Node(3);

  head->next = second;
  
  second->next = third;
  second->prev = head;

  third->prev = second;

  
  myList.forwardNodeTraversal(myList.insertEnd(head, 5));


  return 0;
}