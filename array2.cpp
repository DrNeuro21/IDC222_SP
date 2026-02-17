#include<iostream>
using namespace std;

int main()
{
    int n, i, key, found = 0;
    

    cout << "Enter number of Elements for the array" << endl;
    cin >> n;

    int a[n];

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < n; i++)
    {
        cout << a[i] << " " ;
    }

    cout << "Enter element to search" << endl;
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        cout << "Element Found" << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;

}