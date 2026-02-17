#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int numb;
    cout << "-- Physics Calculator --" << endl;
    cout << "-- Enter 1 for Force Calculations --" << endl;
    cout << "-- Enter 2 for Work Calculations --" << endl;
    cin >> numb;

    switch(numb)
    {
        case 1:
           {

            double mass, acc, Force;
            cout << "Enter mass in kgs" << endl;
            cin >> mass;

            cout << "Enter acc in m/s^2" << endl;
            cin >> acc;
            
            Force = mass * acc;

            cout << "The force is : " << Force << "Newton" << endl;

            break;
           }
        
        case 2:
            {
            double Work, Force, d, angle;
            cout << "Enter Force in Newton : " << endl;
            cin >> Force;

            cout << "Enter distance in meters : " << endl;
            cin >> d;

            cout << "Enter angle in degree : " << endl;
            cin >> angle;

            float rad = angle * 3.14/180;

            cout << "The angle in rad is : " << rad << endl;

            Work = Force * d * cos(rad);

            cout << "The work done is : " << Work << endl;

            break;
            }
        
        default:
            cout << "Invaild Choice" << endl;    
    }

    return 0;
}
