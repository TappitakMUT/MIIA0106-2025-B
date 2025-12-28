#include<iostream>
#include<string>
using namespace std;	

int main() 
{
	int x=10;
	cout << "address of x: " << &x << endl;
	{
		int x=10;
		cout << "address of inner x: " << &x << endl;
		cout << "value of is x  " << x << endl;

		// pointer
		int* p = &x;
		*pt = 100;

		cout << "value of pt p: " << *p << endl;
		cout << "value of " << x << endl;
	}

		getchar();

	return 1;
}