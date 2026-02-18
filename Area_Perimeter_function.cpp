#include<iostream>
#include<cmath>
using namespace std;

float computearea(float r)
{
    return M_PI * r * r;
}

float computeperimeter( float r)
{
    return 2 * M_PI * r;
}

int main()
{
    float radius;

    cout << "Enter radius : " << endl;
    cin >> radius;

    cout << "The area of circle is : " << computearea(radius) << endl;
    cout << "The perimeter of circle is : " << computeperimeter(radius) << endl;

    return 0;

}