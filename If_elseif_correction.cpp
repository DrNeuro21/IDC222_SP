#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float t, h;
    const float g = 9.8;

    cout << "Enter value for H in meters : " << endl;
    cin >> h;

    if (h > 0)
    {
        t = pow((2 * h/g), 0.5);

            cout << "The free fall time is : " << t << endl;
    }
    else if ( h == 0)
    {
            cout << "The object already on ground" << endl;
    }
    else
    {
            cout << "Invalid height" << endl;
    }

    return 0;
}