#include <iostream>
#include <math.h>
using namespace std;

void subarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++)
                cout << arr[k] << "  , ";
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30};
    subarrays(arr, sizeof(arr) / sizeof(int));
    return 0;
}