#include <iostream>
#include <math.h>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int tmp = arr[s];
        arr[s] = arr[e];
        arr[e] = tmp;
        s += 1;
        e -= 1;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr, sizeof(arr) / sizeof(int));
    printArr(arr, sizeof(arr) / sizeof(int));

    return 0;
}