#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Declared pointer variable
	int var = 30;

	// Assigned Data types of Pointer ptr and variable var
	int *ptr;

	// Assigned the address of a variable to a pointer
	ptr = &var;

	// Dereferencing/Chaning the value of pointer ptr
	*ptr = 50;

	cout << "Value at var = " << var << "\n";
	cout << "Value at *ptr = " << *ptr << "\n";
	cout << "Value at ptr = " << ptr << "\n";

	return 0;
}