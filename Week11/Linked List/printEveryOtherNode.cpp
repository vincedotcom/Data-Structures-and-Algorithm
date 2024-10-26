#include <iostream>
using namespace std;

struct Node{
  int info;
  Node* link;
};

void printEveryOtherNode(Node* current) {
  while (current != nullptr) {
    cout << current->info << " ";
    current = current->link->link;
  }
}

int main() {

  // variable declaration
  Node* head = new Node();
  Node* firstNode = new Node();
  Node* secondNode = new Node();
  Node* thirdNode = new Node();
  Node* tail = new Node();

  head->link = firstNode;

  rstNode->info = 1;
  firstNode->link = secondNode;

  secondNode->info = 2;
  secondNode->link = thirdNode;

  thirdNode->info = 3;
  thirdNode->link = tail;

  tail->info = 4;
  tail->link = nullptr;

  printEveryOtherNode(head->link);

  return 0;
}