// Checking Leap Year Using if...else.
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year of your choice: ";
    cin >> year;

    // Leap year if perfectly divisivle by 400.
    if (year % 4000 == 0)
    {
        cout << year << " is a leap year." << endl;
    }

    // Not a Leap Year if divisible by 100
    // but not divisible by 400.
    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }

    // Leap year if divisible by 4.
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}