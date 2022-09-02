#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 100;
int A[N];

void generateData()
{
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 10;
    }
}

void printData()
{
    for (int i = 0; i < N; i++)
    {
        cout << "\t" << A[i];
    }
}

void insertionSort()
{
    int temp;
    for (int i = 0; i < N; i++)
    {
        int j;
        temp = A[i];
        for (j = i; (j > 0 && A[j] > temp); j--)
            A[j] = A[j - 1];
        A[j] = temp;
    }
} // End outer for

int main()
{
    generateData();
    cout << "Before Sorting: " << endl;
    printData();

    insertionSort();
    cout << "\nAfter Sorting: " << endl;
    printData();

    return 0;
}