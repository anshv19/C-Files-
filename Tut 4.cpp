//Pointer - A pointer is a variable which points to a particular value at particular adress.
// & - Adress of
// * - Value of Adress

#include <iostream>
using namespace std;
int main()
{
	string* ptr1;
	int* ptr2;
	string s;
	int n;
	
	s = "Hello"; ptr1 = &s;
	n = 10; ptr2 = &n;
	
	cout << &s << " " << &n;
	cout << ptr1 << " " << ptr2; 
} 
