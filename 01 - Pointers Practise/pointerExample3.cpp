// Example: 3: Write a program that asks the user to enter integers as inputs to be stored in the variable 'a' and 'b' respectively.
// There are also two integer pointers named ptrA and ptrB. Assign the values of a and b to ptrA and ptrB respectively and display them.

#include<iostream>
using namespace std;

int main() {
	string a,b;
	string *ptrA, *ptrB;
	cout<<"Value of a and b is: \n"<<a<<b;
	cin>>a>>b;
	
	ptrA =& a;
	cout<<"Address of pointer of a is: \n"<<ptrA <<endl;
	ptrB =& b;
	cout<<"Address of pointer of b is: \n"<<ptrB<<endl;
	
	return 0;
}
