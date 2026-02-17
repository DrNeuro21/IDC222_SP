#include<iostream>
using namespace std;

int main()
{
    int item;

    cout << "Please enter the Item you want : " << endl;
    cin >> item;

    switch(item)
    {
            case 1:
                cout << "Pizza" << endl;
                break;

            case 2:
                cout << "Cold drink" << endl;
                break;
            
            case 3:
                cout << "Pasta" << endl;
                break;
            
            default:
                cout << "Inavlid option" << endl;

    }

    return 0;
}