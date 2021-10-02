#include <bits/stdc++.h>
using namespace std;
int binary_Search(int arr[], int n, int key)
{
    //implement binary search
    int s = 0;
    int e = n - 1; //index of last element is n-1
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 75};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "enter your key number \n";
    cin >> key;
    int index = binary_Search(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << " is not found !!" << endl;
    }
    return 0;
}