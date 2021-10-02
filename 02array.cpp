#include <bits/stdc++.h>
using namespace std;
void printArray(int n, int *arr)
{
    cout << "in function " << sizeof(arr) << endl;
    arr[0] = 100;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    printArray(n, arr);
    cout << "in main " << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}