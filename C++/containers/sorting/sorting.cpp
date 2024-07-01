#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {4, 8, 7, 1, 3};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // 1 3 4 7 8
    }
    cout << "\n";
    sort(arr, arr + 5, greater<int>()); // sorts in descending order
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // 8 7 4 3 1
    }
    cout << "\n";
    int max = *max_element(arr, arr + 5);
    cout << max << "\n"; // prints max element in arr[]

    int min = *min_element(arr, arr + 5);
    cout << min << "\n"; // prints max element in arr[]
}