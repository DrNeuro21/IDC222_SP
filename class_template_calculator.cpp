#include<iostream>
using namespace std;

template< class T>
class calculator
{
    private:
        T num1, num2;

    public:
        calculator(T num1, num2)
        {
            num1 = n1;
            num2 = n2;
        }
    
    void displayresults()
    {
        cout << "Numbers are : " << num1 << " " << num2 << endl;
        cout << num1 << " + " << num2 << " = " << add();
        cout << num1 << " - " << num2 << " = " << subtract();
        cout << num1 << " * " << num2 << " = " << multiply();
        cout << num1 << " / " << num2 << " = " << divide();
    }

    T add()
    {
        return a + b;
    }
    T subtract()
    {
        return a - b;
    }
    T multiply()
    {
        return a * b;
    }
    T divide()
    {
        return a / b;
    }
};

int main()
{
    calculator<int>(2,1);
    calculator<float>(2.1, 3.1);

    cout << "Results : " << endl;
    cal.displayresults();
}

