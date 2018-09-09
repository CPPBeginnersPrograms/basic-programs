#include<iostream>

using namespace std;


struct node{
	int data;
	node *next;
	node *prev;
};

void insertAtHead(int x);
struct node *getHeadNode(int x);
void printdata(node *);
void revprintdata(node *);

node *head ;
//node *tail ;


int main(){



	insertAtHead(2);
	insertAtHead(4);
	insertAtHead(6);
	insertAtHead(8);
	insertAtHead(10);

	printdata(head);
	revprintdata(head);
//	node *n ;
//	n = new node;
//	n->data = 1;
//	n->prev = NULL;
//	head = n;
//	tail = n;
//
//	n = new node;
//	n->data = 2;
//	n->prev = tail;
//	tail->next = n;
//	tail = n;
//
//	n = new node;
//	n->data = 3;
//	n->prev = tail;
//	tail->next = n;
//	tail = n;
//
//	n = new node;
//	n->data = 4;
//	n->prev = tail;
//	tail->next = n;
//	tail = n;
//	tail->next = NULL;


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

void revprintdata(node *head)
{
	node *tm = head;
	while(tm!=0)
	{
		cout<< tm->data << " ";
		tm = tm->prev;
	}
	cout<<endl;
}

struct node *getHeadNode(int x)
{
	node * newNode = new node;

	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;

	return newNode;
}
void insertAtHead(int x)
{
	node *newNode = getHeadNode(x);

	if(head == 0)
	{
		head = newNode;
	}
	else
	{
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}
