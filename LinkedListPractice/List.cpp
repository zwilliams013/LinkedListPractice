#include <iostream>
#include "List.h"
using namespace std;

List::List() {
	head = NULL; // set head to NULL
}

void List::addValue(int val) {
	/*
	Node *n = new Node();   // create new Node
	n->x = val;             // set value
	n->next = head;         // make the node point to the next node.
							//  If the list is empty, this is NULL, so the end of the list --> OK
	head = n;               // last but not least, make the head point at the new node.
	*/
	if (head == NULL) {
		cout << "head node created" << endl;
		head = new Node();
		head->x = val;
		head->next = NULL;
	}
	else
	{
		Node *end = new Node;
		end = head;

		while (end->next != NULL) {
			end = end->next;
		}

		Node *temp2 = new Node();
		end->next = temp2;
		temp2->x = val;
		temp2->next = NULL;
	}
}

// returns the first element in the list and deletes the Node.
// caution, no error-checking here!
int List::popValue() {
	Node *n = head;
	int ret = n->x;

	head = head->next;
	delete n;
	return ret;
}

void List::display()
{ 
	Node *temp;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->x << " ";
		temp = temp->next;
	}
	cout << endl;
}

void List::remove(int num) {
	Node * temp = new Node;
	temp = head;
	
	if (head->x == num) {
		head = head->next;
	}

	while (temp != NULL && temp->next != NULL && temp->next->x != num) {
		temp = temp->next;
		}
		
		if (temp->next != NULL && temp->next->x == num)  {
			Node *temp2 = temp->next->next;
			delete temp->next;
			temp->next = temp2;
			cout << num << " removed." << endl;
		}
		else {
			cout << num << " Not in list." << endl;
		}
		
	
}