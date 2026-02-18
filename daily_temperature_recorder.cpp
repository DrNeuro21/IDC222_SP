#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<float> temps;
    float t;

    cout << "Enter temmperature for seven days : " << endl;

    for(int i = 0; i < 7; i++)
    {
        cin >> t;
        temps.push_back(t);
    }

    cout << "Temperature readings : " << endl;

    for( auto it = temps.begin(); it!= temps.end(); it++)
    {
        cout << *it << " " << endl;
    }

    cout << endl;

    cout << "Total size" << temps.size() << endl;

    return 0;


}