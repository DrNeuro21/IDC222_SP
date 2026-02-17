#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        float R, velocity, angle;
        const float g = 9.8;

        cout << "Enter initial velocity" << endl;
        cin >> velocity;

        cout << "Enter angle" << endl;
        cin >> angle;

        float rad = angle * 3.14/180;
        
        R = (pow(velocity, 2) * sin(2 * rad))/ g;

        cout << "The range is " << R << endl;

        return 0;

}