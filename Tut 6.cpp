#include <iostream>
using namespace std;
int main()
{
	int a=10, *ptra; 
	string s = "Hello", *ptrs;
	float f = 3.3, *ptrf; 
	
	ptra = &a;
	ptrs = &s;
	ptrf = &f;
	
	cout << "Adress of var: "<< endl;
	cout << ptra << endl;
	cout << ptrs << endl;
	cout << ptrf << endl;
	
	cout << "Value of Adress: "<< endl;
	cout << *ptra << endl;
	cout << *ptrs << endl;
	cout << *ptrf << endl; 
} 
