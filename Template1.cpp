#include<iostream>
using namespace std;

template<class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Addong : " << add(30, 40) << endl;
    cout << "Adding : " << add(30.3, 1.7) << endl;

    return 0;
}