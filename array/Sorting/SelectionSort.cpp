#include <iostream>

using namespace std;

void SelectionSort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int minpos = i;
        for (int j = i; j < n ; j++)
        {
            if(a[minpos] > a[j])
            {
                minpos = j;
            }
        }
        int temp = a[i];
        a[i] = a[minpos];
        a[minpos] = temp;
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

    SelectionSort(a, n);

    cout << endl
         << "the sorted array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}