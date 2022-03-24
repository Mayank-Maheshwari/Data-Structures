#include <iostream>

using namespace std;

int LinearSearch(int *a, int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i] == element)
            return i;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the no. of element you want in the array" << endl;
    cin >> n;

    int a[n];
    cout << endl
         << "Enter the elements of array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int element;
    cout << endl
         << "Enter the element you want to search in the array" << endl;
    cin >> element;

    int index = LinearSearch(a, n, element);

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