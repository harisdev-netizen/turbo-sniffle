#include<iostream>
using namespace std;

int main() {
	string food = "apple";
	string *ptr;
	ptr =& food;
	cout<<"Food is: "<<food<<endl;
	cout<<"Address is: "<<ptr<<endl;
	cout<<"Value of *ptr is: "<<ptr<<endl;
	
	return 0;
}
