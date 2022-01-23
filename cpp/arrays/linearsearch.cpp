#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    int idx = linear_search(arr, sizeof(arr) / sizeof(int), key);
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