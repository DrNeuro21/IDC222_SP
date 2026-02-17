#include<iostream>
#include<string>
using namespace std;

int main()
{
    string first, second, result;

    cout << "Enter the first element : ";
    getline(cin, first);

    cout << "Enter the second element : ";
    getline(cin, second);

    result = first + " " + second;

    cout << "Combined String is : " << result << endl;
    cout << "String Length is : " << result.length();

    return 0;
}