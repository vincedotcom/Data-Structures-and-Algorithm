#include <iostream>
using namespace std;

struct LinkedList
{

  struct Node
  {
    int data;

    Node *prev;

    Node *next;

    Node(int d)
    {
      data = d;
      prev = next = nullptr;
    }
  };

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

  void backwardNodeTraversal(Node *tail)
  {
    Node *current = tail;

    while (current != nullptr)
    {
      cout << current->data << " ";
      current = current->prev;
    }
    cout << endl;
  }

  int findLength(Node *head)
  {
    Node *current = head;
    int length = 0;

    // while (current != nullptr)
    // {
    //   length++;
    //   current = current->next;
    // }

    for (current; current != nullptr; current = current->next)
    {
      length++;
    }

    return length;
  }

  Node *insertBegin(Node *head, int data)
  {
    if (head == nullptr)
    {
      return head;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    head->prev = newNode;
    return head;
  }

  Node *insertEnd(Node *head, int data)
  {
    Node *newLastNode = new Node(data);

    if (head == NULL)
    {
      head = newLastNode;
    }
    else
    {
      Node *current = head;
      while (current->next != nullptr)
      {
        current = current->next;
      }
      current->next = newLastNode;
      newLastNode->prev = current;
    }

    return head;
  }

  // function that insert a new Node in a current position

  Node *insertAtPosition(Node *head, int data, int position)
  {
    // create new node
    Node *newNode = new Node(data);

    if (position == 1)
    {
      newNode->next = head;

      if (head != nullptr)
      {
        head->prev = newNode;
      }

      head = newNode;
      return head;
    }

    Node *current = head;
    // traverse the list to find the node
    for (int i = 1; i < position - 1 && current != nullptr; ++i)
    {
      current = current->next;
    }

    // if the position is out of bounds
    if (current == nullptr)
    {
      cout << "position out of bounds." << endl;
      delete newNode;
      return head;
    }

    // set the prev of new node to curr
    newNode->prev = current;

    // set the new of
    newNode->next = current->next;

    current->next = newNode;

    if (newNode->next != nullptr)
    {
      newNode->next->prev = newNode;
    }

    return head;
  }

  Node *delHead(Node *head)
  {

    if (head == nullptr)
    {
      return nullptr;
    }
    Node *temp = head;
    head = head->next;

    if (head != nullptr)
    {
      head->prev = head;
    }

    delete temp;
    return head;
  }

  Node *delTail(Node *head)
  {
    if (head == nullptr)
    {
      return nullptr;
    }
    if (head->next = nullptr)
    {
      delete head;
      return nullptr;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
      current = current->next;
    }

    current->prev->next = nullptr;
    delete current;

    return head;
  }

  Node *delPos(Node *head, int position)
  {
    // if the list is empty return nullptr
    if (head == nullptr)
    {
      return nullptr;
    }

    // traverse the node to get to the position where we want to delete the node
    Node *current = head;
    for (int i = 1; i < position && current != nullptr; ++i)
    {
      current = current->next;
    }

    // when the current is out of range return the head
    if (current == nullptr)
    {
      return head;
    }

    // link the previous node to the next node
    if (current->prev != nullptr)
    {
      current->prev->next = current->next;
    }

    // link the next previous node to the current previous node
    if (current->next != nullptr)
    {
      current->next->prev = current->prev;
    }

    // if the current did not traverse or the head is still current 
    // meaning the current did not move so our position is 1
    // move the head to the next node
    if (head == current)
    {
      head == current->next;
    }

    // delete the current and return the head
    delete current;
    return head;
  }
};

int main()
{
  LinkedList myList;
  LinkedList::Node *head = new LinkedList::Node(1);
  LinkedList::Node *second = new LinkedList::Node(2);
  LinkedList::Node *third = new LinkedList::Node(3);
  LinkedList::Node *fourth = new LinkedList::Node(7);

  head->next = second;

  second->next = third;
  second->prev = head;

  third->prev = second;
  third->next = fourth;

  fourth->prev = third;

  myList.forwardNodeTraversal(myList.delPos(head, 1));

  return 0;
}