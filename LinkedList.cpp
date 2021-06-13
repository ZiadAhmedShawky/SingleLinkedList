#include "LinkedList.h"
#include <cstddef>
#include<iostream>
using namespace std;
LinkedList::LinkedList()
{
	first = NULL;
}

LinkedList::LinkedList(int arr[], int size)
{
	node* temp, * last;
	first = new node;
	first->data = arr[0];
	first->next = NULL;
	last = first;
	for (int i = 1; i < size; i++)
	{
		temp = new node;
		temp->data = arr[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
}

LinkedList::~LinkedList()
{
	node* p;
	p = first;
	while (p != NULL)
	{
		first = first->next;
		delete p;
		p = first;

	}

}

void LinkedList::display()
{
	node* p;
	p = first;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
}

int LinkedList::length()
{
	int len = 0;
	node *p = first;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return len;
}

void LinkedList::insert(int value,int position)
{
	node* p = first,*temp;
	if (position<0 || position>length())
		return;
	temp = new node;
	temp->data = value;
	temp->next = NULL;
	if (position == 0)
	{
		temp->next = first;
		first = temp;
	}
	else if (position > 0)
	{
		
		
		for (int i = 0; i < position - 1; i++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
}

void LinkedList::Delete(int position)
{
	node* p, * q=NULL;
	p = first;
	if (position<1 || position>length())
		return;
	if (position == 1)
	{
		first = first->next;
		delete p;
	}
	else
	{
		for (int i = 0; i < position - 1; i++)
		{
			q = p;
			p = p->next;

		}
		q->next = p->next;
		delete p;
	}
}

int LinkedList::Max()
{
	node* p = first;
	int max = first->data;
	while (p!=NULL)
	{
		if (max < p->data)
		{
			max = p->data;
		}
		p = p->next;
	}
	return max;
}
