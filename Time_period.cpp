#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        float length, T;
        const float g = 9.8;
        
        cout << "Enter length of teh pendulum : " << endl;
        cin >> length;

        T = 2 * 3.14 * sqrt(length/ g);

        cout << "The time period is : " << T << endl;

        return 0;

}