#include <iostream>
using namespace std;

int main()
{

    int numbers[5] = {2, 4, 1, 10, 40};

    cout << "The numbers are: ";

    // Printing array elements
    // using range based for loop
    for (const int &n : numbers)
    {
        cout << n << "  ";
    }

    cout << "\nThe numbers are: ";

    // Printing array elements
    //  using traditional for loop
    for (int i = 0; i < 5; ++i)
    {
        cout << numbers[i] << "  ";
    }

    return 0;
}