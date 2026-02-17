#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    float a[n];

    cout << "Enter" << n << "Elements" << endl;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}