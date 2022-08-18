#include<iostream>
using namespace std;

int main() {
	int var = 24;
	int *ip;
	ip =& var;
	cout<<"Value of variable is: \n"<<var<<"\n";
	cout<<"Address stored in ip variable: \n"<<ip<<"\n";
	cout<<"Value of *ip is: \n"<<ip<<"\n";
	
	return 0;
}
