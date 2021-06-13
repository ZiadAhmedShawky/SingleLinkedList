#include<iostream>
#include"LinkedList.h"
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5 };
	LinkedList l(arr,5);
	l.insert(18, 3);
	l.Delete(4);
	cout << "List : ";
	l.display();
	cout << endl;
	cout << "Length of the list : " << l.length() << endl;
	cout << "Maximium element in the list : " << l.Max();

}