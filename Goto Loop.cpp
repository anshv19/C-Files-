#include <iostream>
using namespace std;
int main()
{
	int i,sum=0;
	loop: if (i<=3) 
	{
      sum = sum + i; 
      i++;
      goto loop;
    } 
    cout << sum; 
} 
