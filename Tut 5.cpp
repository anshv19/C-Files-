#include <iostream>
using namespace std;
int main()
{
	int var = 10;
	int* ptr; //Pointer Variable.
	ptr = &var; //It is pointing adress 1000.
	
	cout << "Adress of var: " << var << endl;
	cout << "Value of address: " << *ptr; 
}
