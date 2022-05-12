#include <iostream>
using namespace std;
int main()
{
	char * names[3] = {"abc","def","ghi"};
	for (int i = 0; i <3; i++)
	{
		cout << *(names + i ) << " ";
	}
} 
