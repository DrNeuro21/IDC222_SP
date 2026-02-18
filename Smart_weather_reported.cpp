#include<iostream>
#include<string>
using namespace std;

string getweatherreport(int temp)
{
    if ( temp > 35)
        return "Hot";
    else if ( temp >= 20 )
        return "Optimal";
    else
        return "Cold";    
}

int main()
{   
    int Temperature;
    cout << "Enter Tenperature : " << endl;
    cin >> Temperature;

    cout << getweatherreport(Temperature) << endl;

    return 0;
}