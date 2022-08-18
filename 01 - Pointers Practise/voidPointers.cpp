#include <iostream>
using namespace std;

void printnum(int *numberPtr)
{
    cout << *numberPtr << endl;
}

void printchar(char *charPtr)
{
    cout << *charPtr << endl;
}

// This function can print out any data type.
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}

int main()
{
    int num = 10;
    char letter = 'a';
    print(&num, 'i');
    print(&letter, 'c');
    // printnum(&num);
    // printchar(&letter);

    return 0;
}