#include<iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter a Character" << endl;
    cin >> x;

    switch(x)
    {
        case 'A':
            cout << "Choice is A" << endl;
            break;
        
        case 'B':
            cout << "Choice is B" << endl;
            break;
        
        case 'C':
            cout << "Choice is C" << endl;
            break;
        
        default:
            cout << "Niether of A, B or C" << endl;  
    }

    return 0;

}