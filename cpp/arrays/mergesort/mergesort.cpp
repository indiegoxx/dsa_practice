#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{

    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;

    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    // copy remaining array
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }

    // copy remaing array
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    // copy back the elements from temp to original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
    return;
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    return merge(arr, s, e);
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

    mergeSort(arr, s, e);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
