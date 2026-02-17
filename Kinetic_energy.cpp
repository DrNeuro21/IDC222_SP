#include<iostream>
using namespace std;
int main()
{
    int mass, velocity, KE;

    cout << "Enter the mass in kgs" << endl;
    cin >> mass;

    cout << "Enter Velocity in m/s" << endl;
    cin >> velocity;

    KE = 0.5 * mass * (velocity * velocity);

    cout << "KE : " << KE << "Joules" << endl;

    return 0;

}