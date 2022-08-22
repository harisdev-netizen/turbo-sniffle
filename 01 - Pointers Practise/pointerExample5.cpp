/*
  Write a program to find the max of an integer data set. The program will ask the user to input the number of data values
  in the set and each value. The program print on screen a pointer tha points to the max value
*/

#include <iostream>
using namespace std;

int main()
{
  int n, i, max = 0;
  cout << "Enter number of values: ";
  cin >> n;

  cout << "Enter values in array:\n";
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int j = 0; j <= n; j++)
  {
    if (arr[j] > max)
      max = arr[j];
  }

  int *pointer = &max;
  cout << "Largest integer value in the array is: " << *pointer << endl;

  return 0;
}
