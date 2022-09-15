#include <cstdlib>
#include <iostream>

using namespace std;

const int N = 50;
int A[N];

int bubbleSort = 0;

void generate_data()
{
	for (int i = 0; i < N; i++)
	{
		A[i] = rand();
	}
}

void print_data()
{
	for (int i = 0; i < N; i++)
	{
		cout << "\t" << A[i];
	}
}

void bubble_sort()
{
	int n = N;
	for (int i = 0; i < N; i++)
	{
		bubbleSort = bubbleSort + 2;

		int swapped = 0;
		for (int j = 1; j < n; j++)
		{
			bubbleSort = bubbleSort + 2;
			if (A[j] < A[j - 1])
			{
				int tmp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = tmp;
				swapped = 1;
				bubbleSort = bubbleSort + 5;
			} // end if
		}	  // end inner for
		n = n - 1;
		if (swapped == 0)
			break;

		bubbleSort = bubbleSort + 2;
	}
}

int main()
{
	generate_data();
	cout << "Before Sorting ...." << endl;
	print_data();
	bubble_sort();
	cout << "\nAfter Sorting ...." << endl;
	print_data();
	cout << "\nNumber of bubble sort operations performed: " << bubbleSort;
	return 0;
}
