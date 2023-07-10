#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1, -2, -2};
    int n = sizeof(arr) / sizeof(int);
    int current_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + arr[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum;
}