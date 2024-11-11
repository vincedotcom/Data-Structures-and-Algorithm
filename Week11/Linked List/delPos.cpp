#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prev;

  Node(int data)
  {
    this->data = data;
    next = prev = nullptr;
  }
};

Node *delPos(Node *head, int pos)
{

  if (head == nullptr && pos <= 0)
  {
    return head;
  }

  Node *current = head;
  if (pos == 1)
  {
    head = head->next;
    if (head != nullptr)
    {
      head->prev = nullptr;
    }
    delete current;
    return head;
  }

  for (int i = 1; i < pos && current != nullptr; ++i)
  {
    current = current->next;
  }

  if (current == nullptr)
  {
    return head;
  }

  if (current->prev != nullptr)
  {
    current->prev->next = current->next;
  }

  if (current->next != nullptr)
  {
    current->next->prev = current->prev;
  }

  delete current;
  return head;
}

void insertAtEnd(Node *&head)
{
  Node *newNode = new Node(6);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  Node *current = head;
  while (current->next != nullptr)
  {
    current = current->next;
  }

  current->next = newNode;
  newNode->prev = current;
}

void insertAtPos(Node *&head, int pos)
{
  Node* newNode = new Node(10);
  
  if (pos == 1) {
    newNode->next = head;
    if (head != nullptr) {
      head->prev = newNode;
    }
    head = newNode;
    return;
  }

}

void forwardNodeTraversal(Node *head)
{
  Node *current = head;

  while (current != nullptr)
  {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

int main()
{
  Node *head = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);

  head->next = second;

  second->prev = head;
  second->next = third;
  third->prev = second;

  insertAtEnd(head);
  forwardNodeTraversal(head);

  return 0;
}