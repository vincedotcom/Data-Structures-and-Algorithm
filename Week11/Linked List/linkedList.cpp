#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

void traverse(Node *head)
{
  Node* current = head;

  while (current != nullptr) 
  {
    cout << current->data << " ";
    current = current->next; 
  }
  cout << endl;
  
}

int main()
{

  Node *head = new Node(99);
  Node *second = new Node(200);
  Node *third = new Node(500);

  head->next = second;
  second->next = third;

  traverse(head);

  return 0;
}