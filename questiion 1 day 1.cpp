#include <iostream>
using namespace std;

int findMinimum(int a[], int n)
{
    int mn = a[0]; 

    for (int i = 0; i < n; i++)
    {
        mn = min(mn, a[i]); 
    }
    return mn;
}

int findMaximum(int a[], int n)
{
    int mx = a[0]; 
    for (int i = 0; i < n; i++) 
    {
        mx = max(mx, a[i]); 
    }
    return mx;
}

int main()
{
    int n;

    cout << " Enter the size: ";
    cin >> n;

    int arr[n], i, pos;
cout << "\n\n Enter the " << n << " elements: \n\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n\n The " << n << " elements are: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    int mn = findMinimum(arr, n);

    int mx = findMaximum(arr, n);

    cout << "\n\n\nThe Smallest element is: " << mn;

    cout << "\n\nThe Largest element is: " << mx << "\n\n\n";
return 0;
}