#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of element you want in the array" << endl;
    cin >> n;

    int a[n];
    cout << endl << "Enter the element of array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl << "the entered array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<"\t";
    }

    return 0;
}