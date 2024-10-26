#include <iostream>
using namespace std;

struct Node {
  int info;
  Node* link;
};

void insertNewNode(Node** current) {
  Node* newNode = new Node();
  newNode->link = *current;
  newNode->info = 0;
  *current = newNode->link;

}

void printNodeInfo(Node* current) {
  while (current != nullptr) {
    cout << current->info << " ";
    current = current->link;
  }
  }


int main() {

  Node* head = new Node();
  Node* firstNode = new Node();
  Node* secondNode = new Node();
  Node* thirdNode = new Node();
  Node* tail = new Node();

  head->link = firstNode;
  
  firstNode->info = 1;
  firstNode->link = secondNode;

  secondNode->info = 2;
  secondNode->link = thirdNode;

  thirdNode->info = 3;
  thirdNode->link = tail;

  tail->info = 4;
  tail->link = nullptr;

  insertNewNode(&head);

  





  return 0;
}