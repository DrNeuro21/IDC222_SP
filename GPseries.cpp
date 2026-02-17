#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, r, n, sum = 0, i;

    cout << "Enter first term" << endl;
    cin >> a;

    cout << "Enter common ration : " << endl;
    cin >> r;

    cout << "Number of terms : " << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        sum = sum + a * pow(r, i);
    }

    cout << "The GP series is : " << sum << endl;

    return 0;
}