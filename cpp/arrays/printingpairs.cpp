#include <iostream>
#include <math.h>
using namespace std;

void print_pairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << " (" << x << " , " << y << " ) ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    print_pairs(arr, sizeof(arr) / sizeof(int));
    return 0;
}