#include<iostream>
using namespace std;

struct Node{
	int Value;
	Node* Next; 
		
};

void Remove(int remove, Node* current)
{
	int i = 1;
	while(current != nullptr)
	{
		if(i < remove && i > remove-2)
		{
			current->Next = current->Next->Next;
		}
		
		i++;
		
	}
}

int main(){
	

	Node* Node1 = new Node();
	Node* Node2 = new Node();
	Node* Node3 = new Node();
	Node* Node4 = new Node();

	Node1->Value = 1;
	Node2->Value = 2;
	Node3->Value = 3;
	Node4->Value = 4;
	
	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = Node4;
	Node4->Next = nullptr;
	
	Node* current = Node1;

	

	Remove(2, current);
	
	while(current != nullptr)
	{
		cout << current->Value << " ";
		current = current->Next;	
	}
	
	
	
	
	
	
	
	return 0;
}