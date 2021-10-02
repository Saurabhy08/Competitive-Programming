#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    //out of the loop
    return -1;
}
int main()
{
    int arr[] = {10, 20, 43, 52, 78, 12, 9, 54, 47, 1};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter your key number \n";
    cin >> key;
    int index = linearSearch(arr, n, key);
    if (index != -1)
    {
        cout << key << "is present at index " << index << endl;
    }
    else
    {
        cout << key << "is not present!" << endl;
    }
    return 0;
}