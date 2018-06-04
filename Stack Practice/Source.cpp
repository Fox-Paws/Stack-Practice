#include <cstdlib>
#include <iostream>
using namespace std;

char name[20];

class node
{
public:
	int data;
	node* next;
};

int main() {
	node* top = NULL;
	node* first = new node;
	node* second = new node;
	node* third = new node;
	node* fourth = new node;
	first->data = 21;
	second->data = 23;
	third->data = 25;
	fourth->data = 27;

	top = first;
	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = NULL;

	node* temp = top;

	while (temp != NULL) 
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	return 0;
}