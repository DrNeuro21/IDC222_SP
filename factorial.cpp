#include<iostream>
using namespace std;

int main()
{
    int n , i;
    int f = 1, sum = 0;

    cout << "Enter the number of terms" << endl;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
            f = f * i;
            sum = sum + f;
    }

    cout << "The catorial is : " << sum << endl;
    
    return 0;
}