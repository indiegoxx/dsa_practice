//using brute force

#include <iostream>
#include <math.h>
using namespace std;

int largestSum(int arr[], int n)
{
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s = 0;
            for (int k = i; k <= j; k++)
                s += arr[k];
            l = max(l, s);
        }
    }
    return l;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    cout << largestSum(arr, sizeof(arr) / sizeof(int));
    return 0;
}