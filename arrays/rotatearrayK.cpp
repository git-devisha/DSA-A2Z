#include <bits/stdc++.h>
using namespace std;

// Function to rotate array left by k positions
void Rotate_left(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n; // Ensure k is within array bounds

    int temp[k];

    // Store first k elements in temp
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shift elements left
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[i + k];
    }

    // Copy temp elements to the end
    for (int i = 0; i < k; i++)
    {
        arr[n - k + i] = temp[i];
    }
}

// Function to rotate array right by k positions
void Rotate_right(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n; // Ensure k is within array bounds

    int temp[k];

    // Store last k elements in temp
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }

    // Shift elements right
    for (int i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the front
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    // Rotate Right
    Rotate_right(arr, n, k);
    cout << "Rotation to right: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotate Left
    Rotate_left(arr, n, k);
    cout << "Rotation to left: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
