#include <iostream>

using namespace std;

void QuickSort(int *arr, int start, int end);

int main()
{
    int n;
    cout << "Enter the no. of element you want in the array" << endl;
    cin >> n;

    int a[n];
    cout << endl
         << "Enter the element of array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    QuickSort(a, 0, n - 1);

    cout << endl
         << "the sorted array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}

void QuickSort(int *arr, int start, int end)
{
    if (end - start <= 1)
    {
        return;
    }

    int pivot = arr[end];

    int swap = start, check = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[swap];
            arr[swap] = temp;
            swap++;
        }
        check++;
    }

    int temp = arr[swap];
    arr[swap] = arr[end];
    arr[end ] = temp;

     QuickSort(arr, start, swap - 1);
     QuickSort(arr, swap, end);
}