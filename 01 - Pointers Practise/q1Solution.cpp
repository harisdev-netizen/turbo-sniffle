#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 3;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int **ptr3 = &ptr2;
    int ***ptr4 = &ptr3;
    cout << ptr1 << endl;
    ptr2 = ptr1;
    cout << **ptr3 << endl;
    cout << ***ptr4 << endl;

    system("PAUSE");
    return 0;
}
