#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        double x , A, v;

        cout << "Enter value for x : " << endl;
        cin >> x;

        cout << "Enter valude for A : " << endl;
        cin >> A;

        cout << "Enter value for v : " << endl;
        cin >> v;

        if (abs(x) == A && v == 0)
            {   
                cout << "Maximum Displacement" << endl;
            }
        
        else if ( abs(x) == 0 )
        {
                cout << "At Equilibrium" << endl;
        }

        else if ( abs(x) < A )
        {
                cout << "In Motion" << endl;
        }
        else
        {
                cout << "Invalid input" << endl;
        }

    return 0;
}