#pragma once
class node
{
public:
	int data;
	node* next;
};
class LinkedList
{
private:
	node* first;
public:
	LinkedList();
	LinkedList(int arr[], int size);
	~LinkedList();
	void display();
	int length();
	void insert(int value,int position);
	void Delete(int position);
	int Max();

};

