#include <iostream>
using namespace std;
int main()
{
	int var[3] = {10,20,30};
	int * ptr;
	ptr = & var[0];
	for (int i = 0; i < 3; i++)
	{
		cout << *ptr << " ";
		ptr ++; //points to next location 
	}
} 
