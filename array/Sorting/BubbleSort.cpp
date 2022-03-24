#include <iostream>

using namespace std;

void BubbleSort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
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

    BubbleSort(a, n);

    cout << endl
         << "the sorted array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}