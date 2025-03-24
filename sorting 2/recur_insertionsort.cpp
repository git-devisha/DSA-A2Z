#include <bits/stdc++.h>
using namespace std;
/*iterative method:
take element ffrom unsorted array- by outer loop
place it in corresponding position in sorted array- inner loop
shift elements to rearrange*/

/*recursive method:
call recursive function with given array, size fo array and index
in the recurr fiunctoin, take index element i from sorted array
place the ele in corresponding position in sorted array- by swapping
shift rest of elements
call the recursion i++
continue the recur function until reaches index
base case= if(i==n) return to stop/break the function*/

void insertion_sort(int arr[], int i, int n)
{
    if (i == n)
        return; // Base case

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertion_sort(arr, i + 1, n);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "before" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, 1, n);

    cout << "after" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}