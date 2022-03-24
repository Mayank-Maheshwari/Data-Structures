#include <iostream>

using namespace std;

void Merge(int *arr, int start, int mid, int end);
void MergeSort(int *arr, int start, int end);

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

    MergeSort(a, 0, n);

    cout << endl
         << "the sorted array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}

void MergeSort(int *arr, int start, int end)
{
    if (end - start <= 1)
    {
        return;
    }
    int mid = (start + end) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid, end);
    Merge(arr, start, mid, end);
}

void Merge(int *arr, int start, int mid, int end)
{
    int b[end - start];
    int j = start, k = mid;
    for (int i = start, l = 0; i < end; i++, l++)
    {
        if (j < mid && arr[j] <= arr[k])
        {
            b[l] = arr[j];
            j++;
        }
        else if (k < end && arr[j] > arr[k])
        {
            b[l] = arr[k];
            k++;
        }
        else
        {
            if (j < mid)
            {
                b[l] = arr[j];
                j++;
            }
            else if (k < end)
            {
                b[l] = arr[k];
                k++;
            }
        }
    }
    for (int i = start, l = 0; i < end; i++, l++)
    {
        arr[i] = b[l];
    }
}
