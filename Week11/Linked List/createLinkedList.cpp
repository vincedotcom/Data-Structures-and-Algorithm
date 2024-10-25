#include <iostream>
using namespace std;

struct Node {
  int info;
  Node* link;

};

int main() {

  Node* head = new Node();
  Node* node1 = new Node();
  Node* tail = new Node();

  head->link = node1;
  
  node1->info = 200;
  node1->link = tail;

  tail->info = 400;
  tail->link = nullptr;

  Node* current = head->link;

  while(current != nullptr) {
    cout << current->info << " ";
    current = current->link;
  }

  return 0;
}