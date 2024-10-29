#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


// C++ Function to traverse and print the elements of the linked
// list
void traverseLinkedList(Node* head)
{
    /*
    Algorithm
    1. traverse the linked list
    2. print the current data in the node
    3. move the node to to the next node
    4. loop over until the last node
    */
    // Start from the head of the linked list
    Node* current = head;

    // Traverse the linked list until reaching the end
    // (nullptr)
    while (current != nullptr) {
      
        // Print the data of the current node
        cout << current->data << " ";

        // Move to the next node
        current = current->next;
    }

    cout << endl;
}

// Function to search for a value in the Linked List
bool searchLinkedList(Node* head, int target)
{
    /*
    Algorithm
    1. traverse the linked list
    2. find if the current node data is equal to the target
    3. if true return true
    4. move to the next node
    5. after traversal if the value does not exist return false
    
    */
    // Traverse the Linked List
    while (head != nullptr) {

        // Check if the current node's
        // data matches the target value
        if (head->data == target) {
            return true; // Value found
        }

        // Move to the next node
        head = head->next;
    }

    return false; // Value not found
}

Node* insertAtBeginning(Node* head, int value)
{   
    /*
    Algorithm
    1. declare a pointer function
    2. create a new node
    3. point the new node to the head
    4. move the head to the new node
    5. return the head 
    */
    // Create a new node with the given value
    Node* newNode = new Node(value);

    // Set the next pointer of the new node to the current
    // head
    newNode->next = head;

    // Move the head to point to the new node
    head = newNode;

    // Return the new head of the linked list
    return head;
}

// C++ function to find the length of the linked list
int findLength(Node* head)
{
    /*
    Algorithm
    1. create a counter variable
    2. traverse the node
    3. update counter every node until the last node
    4. return the length of the node;
    
    */
    // Initialize a counter for the length
    int length = 0;

    // Start from the head of the list
    Node* current = head;

    // Traverse the list and increment the length for each
    // node
    while (current != nullptr) {
        length++;
        current = current->next;
    }

    // Return the final length of the linked list
    return length;
}

// C++ Function to insert a node at the end of the linked
// list
Node* insertAtEnd(Node* head, int value)
{
    /*
    Algorithm
    1. create new node
    2. if the list is empty, make the new node the head
    3. traverse the list until the last node is reached
    4. link the last node the to the new node
    */
    // Create a new node with the given value
    Node* newNode = new Node(value);

    // If the list is empty, make the new node the head
    if (head == nullptr) 
        return newNode;

    // Traverse the list until the last node is reached
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Link the new node to the current last node
    current->next = newNode;
    return head;
}


// Function to insert a Node at a specified position
// without using a double pointer
Node* insertPos(Node* head, int pos, int data)
{
    /*
    Algorithm
    1. if the position is less than 1 return the head
    2. if inserting at the head 
        1. create new head
        2. point the new head to the first node/head
        3. return the temp or the new head
    3. move the head to the previous position we want to insert 
        1. create prev Node pointer variable
        2. declare a counter = 1
        3. traverse the linked list 
            1. move the head to the previous node we want to insert
        4. after finding the prev head we want to insert
            1. create new node
            2. point the new node to the prev next node 
            3. point the prev node to the new node

    */
    if (pos < 1) {
        cout << "Invalid position!" << endl;
        return head;
    }

    // Special case for inserting at the head
    if (pos == 1) {        
        Node* temp = new Node(data);
        temp->next = head;
        return temp;
    }

    // Traverse the list to find the node
    // before the insertion point
    Node* prev = head;
    int count = 1;
    while (count < pos - 1 && prev != nullptr) {
        prev = prev->next;
        count++;
    }

    // If position is greater than the number of nodes
    if (prev == nullptr) {
        cout << "Invalid position!" << endl;
        return head;
    }

    // Insert the new node at the specified position
    Node* temp = new Node(data);
    temp->next = prev->next;
    prev->next = temp;

    return head;
}

int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    node1->next = node2;
    node2->next = node3; 

   
    traverseLinkedList(node1);

    return 0;
}