#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *link;

  Node(int data)
  {
    this->data = data;
    link = nullptr;
  }
};

void traverse(Node *head)
{
  Node *current = head;
  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->link;
  }
  cout << endl;
}

Node *reverse(Node *head)
{
  Node *current = head;
  Node *prev = nullptr;
  Node *next = nullptr;
  while (current != nullptr)
  {
    next = head->link;
  }
}
int main()
{

  Node *head = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);

  head->link = second;
  second->link = third;

  traverse(head);

  return 0;
}