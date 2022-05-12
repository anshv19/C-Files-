// 1. Fn.P /declaration - Signature
// void - return type, fun(void) - List of arguments.

// 2. Fn Call - fun();

// 3. Fn. definition - define the logic/user defined fn.

void fun(int);  //FP
int x = 20;  // Global Scope

#include <iostream>
using namespace std;
int main()
{
	int a = 10;fun(a);  //Fn call
	return  0;
}

void fun(int a)
{
	cout << a << endl;
	cout << x;  	
}



