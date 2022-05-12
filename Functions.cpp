// Functions : Moddules for performing a well-defined task.
// -reuse function at multiple places.

// Calling function 
// 1. Fn.Prototype (Fn.declaration)
// 2. Fn.call
// 3. Fn.definition

#include <iostream>
using namespace std;

	void fun()     //Fn definition
	{
		cout << "Hello";
	}
	
int main()
{
	fun();         //Fn call
	return 0;  
}
