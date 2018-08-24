#include<iostream>

using namespace std;


struct node
{
	int data;
	node *next;

};

struct node *getNode(int x);
void insertNode(int x);
void printdata(node *);


node *head ;
node *prev ;
int main()
{




//	node* n ;

//	n = new node;
//	n->data = 1;
//	head = n;
//	head->next = NULL;
//
//
//	n = new node;
//	n->data = 2;
//	head->next = n;
//
//
//	n = new node;
//	n->data = 3;
//	head->next->next = n;
//
//
//	n = new node;
//	n->data = 4;
//	head->next->next->next = n;
//	n->next = NULL;

	insertNode(2);
	insertNode(3);
	insertNode(4);
	insertNode(5);
	insertNode(6);
	printdata(head);
	return 0;

}

void printdata(node *head)
{
	node *tm = head;
	while(tm!=0)
	{
		cout<< tm->data << " ";
		tm = tm->next;
	}
	cout<<endl;
}

struct node *getNode(int x)
{
	node *newNode = new node;

	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

void insertNode(int x)
{
	node *newNode = getNode(x);

	if(head == 0)
	{
		head = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
}
