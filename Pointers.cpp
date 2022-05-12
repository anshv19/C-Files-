//Pointer - A pointer is a variable which points to a particular value at particular adress.
// & - Adress of
// * - Value of Adress / Dereferencing Operator. 

#include <iostream>
using namespace std;
int main()
{
	string s;
	int n;
	
	s = "Hello";
	n = 10;
	
	cout << &s << " " << &n;   
}
