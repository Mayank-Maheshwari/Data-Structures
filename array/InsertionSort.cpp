#include <iostream>

using namespace std;

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

    cout << endl
         << "the sorted array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}