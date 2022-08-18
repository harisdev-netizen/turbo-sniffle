#include <iostream>
#include <string>
using namespace std;

int getMin(int nums[], int size)
{
    int min = nums[0];
    for (int i = 1; i < size; i++)
    {
        if (nums[i] < min)
            min = nums[i];
    }
    return min;
}

int getMax(int nums[], int size)
{
    int max = nums[0];
    for (int i = 1; i < size; i++)
    {
        if (nums[i] > max)
            max = nums[i];
    }
    return max;
}

// One function for getting Min and Max both at once.
void getMinMax(int nums[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (nums[i] > *max)
            *max = nums[i];
        if (nums[i] < *min)
            *min = nums[i];
    }
}

int main()
{
    int nums[6] = {0, 4, 3, -20, 5, 9};
    int min = nums[0];
    int max = nums[0];
    getMinMax(nums, 6, &min, &max);
    cout << "Minimum is: " << min << endl;
    cout << "Maaximum is: " << max << endl;
    // cout << "Minimum number is: " << getMin(nums, 6) << endl;
    // cout << "Maxmimum number is: " << getMax(nums, 6) << endl;

    return 0;
}

// Using Pointers to return multiple values from a function. Minimum or Maximum.