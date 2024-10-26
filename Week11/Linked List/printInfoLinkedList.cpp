#include <iostream>
using namespace std;


struct Node {
  int info;
  Node* link;
};



void printNodeInfo(Node* current) {
  while (current != nullptr) {
    cout << current->info << " ";
    current = current->link;
  }
}

int main() {

  Node* head = new Node();
  Node* node1 = new Node();
  Node* tail = new Node();

  head->link = node1;
  node1->info = 1200;
  node1->link = tail;
  tail->info = 1300;
  tail->link = nullptr;

  printNodeInfo(head->link);


  return 0;
}