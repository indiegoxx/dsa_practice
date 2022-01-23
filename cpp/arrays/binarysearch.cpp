#include <iostream>
#include <math.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int l = 0, u = n - 1;
    while (l < u)
    {
        int mid = (l + u) / 2;
        cout << "Checking at " << mid << "\n";
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            l = mid;
        }
        else
        {
            u = mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Enter search term : ";
    int key;
    cin >> key;
    int idx = binary_search(arr, sizeof(arr) / sizeof(int), key);
    if (idx != -1)
    {
        cout << key << " Found at " << idx << " position";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}