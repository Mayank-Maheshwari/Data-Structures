#include <iostream>

using namespace std;

void InsertionSort(int *a, int n);
int BinarySearch(int *a, int n, int element);

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

    InsertionSort(a, n);

    int element;
    cout << endl
         << "Enter the element you want to search in the array" << endl;
    cin >> element;

    int index = BinarySearch(a, n - 1, element);
    if (index == -1)
    {
        cout << endl
             << "the element not found" << endl;
    }

    else
    {
        cout << endl
             << "the element found at position : " << index + 1 << endl;
    }
    return 0;
}

int BinarySearch(int *a, int n, int element)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (element == a[mid])
            return mid;
        else if (element > a[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
void InsertionSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int minpos = i, min = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > min)
            {
                a[minpos] = a[j];
                minpos = j;
            }
        }
        a[minpos] = min;
    }
}
