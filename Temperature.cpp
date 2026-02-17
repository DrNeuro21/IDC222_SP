#include<iostream>
using namespace std;
int main()
{
    float T;

    cout << "Enter Temperature of water" << endl;
    cin >> T;

    if ( T < 0.0)
    {
            cout << "ICE" << endl;
    }
    else if ( T >= 0 && T < 100)
    {
            cout << "WATER" << endl;
    }
    else if ( T >= 100)
    {
            cout << "STREAM" << endl;
    }

    return 0;
}