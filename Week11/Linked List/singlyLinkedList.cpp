#include <iostream>
using namespace std;

struct List
{
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

    // C++ Function to traverse and print the elements of the linked list
    void traverseLinkedList(Node *head)
    {
        /*
        Algorithm
        1. traverse the linked list
        2. print the current data in the node
        3. move the node to to the next node
        4. loop over until the last node
        */
        // Start from the head of the linked list
        Node *current = head;

        // Traverse the linked list until reaching the end
        // (nullptr)
        while (current != nullptr)
        {

            // Print the data of the current node
            cout << current->data << " ";

            // Move to the next node
            current = current->next;
        }

        cout << endl;
    }

    // Function to search for a value in the Linked List
    bool searchLinkedList(Node *head, int target)
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
        while (head != nullptr)
        {

            // Check if the current node's
            // data matches the target value
            if (head->data == target)
            {
                return true; // Value found
            }

            // Move to the next node
            head = head->next;
        }

        return false; // Value not found
    }

    Node *insertAtBeginning(Node *head, int value)
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
        Node *newNode = new Node(value);

        // Set the next pointer of the new node to the current
        // head
        newNode->next = head;

        // Move the head to point to the new node
        head = newNode;

        // Return the new head of the linked list
        return head;
    }

    // C++ function to find the length of the linked list
    int findLength(Node *head)
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
        Node *current = head;

        // Traverse the list and increment the length for each
        // node
        while (current != nullptr)
        {
            length++;
            current = current->next;
        }

        // Return the final length of the linked list
        return length;
    }

    // C++ Function to insert a node at the end of the linked
    // list
    Node *insertAtEnd(Node *head, int value)
    {
        /*
        Algorithm
        1. create new node
        2. if the list is empty, make the new node the head
        3. traverse the list until the last node is reached
        4. link the last node the to the new node
        */
        // Create a new node with the given value
        Node *newNode = new Node(value);

        // If the list is empty, make the new node the head
        if (head == nullptr)
            return newNode;

        // Traverse the list until the last node is reached
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }

        // Link the new node to the current last node
        current->next = newNode;
        return head;
    }

    // Function to insert a Node at a specified position
    // without using a double pointer
    Node *insertPos(Node *head, int pos, int data)
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
        if (pos < 1)
        {
            cout << "Invalid position!" << endl;
            return head;
        }

        // Special case for inserting at the head
        if (pos == 1)
        {
            Node *temp = new Node(data);
            temp->next = head;
            return temp;
        }

        // Traverse the list to find the node
        // before the insertion point
        Node *prev = head;
        int count = 1;
        while (count < pos - 1 && prev != nullptr)
        {
            prev = prev->next;
            count++;
        }

        // If position is greater than the number of nodes
        if (prev == nullptr)
        {
            cout << "Invalid position!" << endl;
            return head;
        }

        // Insert the new node at the specified position
        Node *temp = new Node(data);
        temp->next = prev->next;
        prev->next = temp;

        return head;
    }

    // Delete the head node and return the new head
    Node *deleteHead(Node *head)
    {

        /*
        Algorithm
        1. check if the list is empty and return nullptr
        2. Store the head to temporary pointer variable
        3. point the head to the next node
        4. delete the temp using delete keyword
        5. return the new head

        */

        // Check if the list is empty
        if (head == nullptr)
            return nullptr;

        // Store the current head in a
        // temporary variable
        Node *temp = head;

        // Move the head pointer to the next node
        head = head->next;

        // Free the memory of the old head node
        delete temp;

        return head;
    }

    // C++ Function to remove the last node of the linked list
    Node *removeLastNode(Node *head)
    {
        /*
            Algorithm
            1. if the list is empty return nullptr
            2. if the node is only one delete the head and return nullptr
            3. find the second to the last node
            4. delete the last node
            5. and change the second last node next to nullptr
            6. return head;
        */

        if (head == nullptr)
            return nullptr;

        if (head->next == nullptr)
        {
            delete head;
            return nullptr;
        }

        // Find the second last node
        Node *second_last = head;
        while (second_last->next->next != nullptr)
            second_last = second_last->next;

        // Delete last node
        delete (second_last->next);

        // Change next of second last
        second_last->next = nullptr;

        return head;
    }

    // Function to delete a node at a given position
    Node *deleteNode(Node *head, int position)
    {
        /*
            Algorithm
            1. if the linked list is empty return the head
            2. if the head is to be deleted
                1. make the next node as the new head
                2. delete the old head
                3. return the new head
            3. loop trough the list till found the position of to be deleted
                1. to loop check if the position is not equal to the target
                2. if not equal store prev and move to the next node
                3. if found cancel the loop and move the code
            4. if the given position is found check if its not Nullptr
                1. move the prev->next to the temp->next
                2. delete the temp

        */
        // previous of node to be deleted
        Node *prev;
        Node *temp = head;

        // Base case if linked list is empty
        if (temp == nullptr)
            return head;

        // Case 1: Head is to be deleted
        if (position == 1)
        {
            // make next node as head and free old head
            head = temp->next;
            delete temp;
            return head;
        }

        // Case 2: Node to be deleted is in middle
        // Traverse till given position
        for (int i = 1; i != position; i++)
        {
            prev = temp;
            temp = temp->next;
        }

        // If given position is found, delete node
        if (temp != nullptr)
        {
            prev->next = temp->next;
            delete temp;
        }
        else
        {
            cout << "not found";
        }

        return head;
    }
};

int main()
{
    List myList;
    List::Node *head = new List::Node(3);
    head->next = new List::Node(12);
    head->next->next = new List::Node(12);
    head->next->next->next = new List::Node(12);
    head->next->next->next->next = new List::Node(1);

    List::Node *newNode = myList.deleteNode(head, 0);

    return 0;
}