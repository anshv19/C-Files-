#include <iostream>
using namespace std;
int main()
{
	int var;
	int*ptr1, **ptr2;
	var=30;
	ptr1 = & var;
	ptr2 = & ptr1; 
	
	cout << var << endl;
	cout << "At ptr1" << " " << *ptr1 << endl;
	cout << "At ptr2" << " " << **ptr2; 

	
}
