#include<iostream>
using namespace std;

int main()
{
    int mass, velocity, KE;

    cout << "Enter mass in Kgs" << endl;
    cin >> mass;

    cout << "Enter velocity in m/s" << endl;
    cin >> velocity;

    KE = 0.5 * mass * (velocity * velocity);

    cout << "The KE is : " << KE << endl;

    return 0;
}