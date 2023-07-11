#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int s, int e)
{
    int pivot = a[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;
}

void quicksort(vector<int> &a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // Rec Case
    int p = partition(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}

int main()
{
    vector<int> arr{10, 5, 2, 3, 6, 8, 7, 9, 1};
    int s = 0;
    int e = arr.size() - 1;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    quicksort(arr, s, e);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
