#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
T sub(T a, T b)
{
    return a - b;
}

template <typename T>
T multi(T a, T b)
{
    return a * b;
}

template<typename T>
T divide(T a, T b)
{
    return a / b;
}

int main()
{
int x, y;
float a, b;
cout << "Enter two integers: ";
cin >> x >> y;
cout << "Addition (int): " << add<int>(x, y) << endl;
cout << "Subtraction (int): " << sub<int>(x, y) << endl;
cout << "Multiplication (int): " << multi<int>(x, y) << endl;
cout << "Division (int): " << divide<int>(x, y) << endl;
cout << "\nEnter two floating-point numbers: ";
cin >> a >> b;
cout << "Addition (float): " << add<float>(a, b) << endl;
cout << "Subtraction (float): " << sub<float>(a, b) << endl;
cout << "Multiplication (float): " << multi<float>(a, b) << endl;
cout << "Division (float): " << divide<float>(a, b) << endl;
return 0;
}