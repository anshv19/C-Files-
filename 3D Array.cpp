#include <iostream>
using namespace std;
int main()
{
	int a[2][3][4],i,j,k;
	cout << "Enter 16 values";
	for (i=0;i<2;i++)
	{
		for (j=0;j<4;j++)
		{
			for (k=0;k<2;k++)
			{
				cin >> a[i][j][k];		
			}
		}
	}
	for(int i=0;i<1;i++)
	{
		for (int j=0;j<2;j++)
		{
			for (int k=0;k<3;k++)
			{
				cout << a[i][j][k]<< " ";
			}
			cout << endl; 
		}
	}
}
