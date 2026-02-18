#include<iostream>
using namespace std;

float findmaxrainfall(float a[], int size)
{
    float maxvalue = a[0];

    for(int i = 1; i < size ; i++)
    {
        if (a[i] > maxvalue)
            {
                maxvalue = a[i];
            }
    }

    return maxvalue;
}

int main()
{
    int n;

    cout << "Enter the number of rainfall this week : " << endl;
    cin >> n;

    cout << "Rainfall this week are : " << n << "in mms" << endl;

    float rainfall[n];

    cout << "Enter rainfall values : " << endl;
    for(int i = 0 ; i < n; i++)
    {
        cin >> rainfall[i];
    }

    float maxrain =  findmaxrainfall(rainfall, n);

    cout << "Max : " << maxrain << endl;

    return 0;
}