#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        int roll_no;
        string name;
        int marks;
    
    public:
        void getdata()
        {
                cout << "Enter Roll no. : " << endl;
                cin >> roll_no;

                cout << "Enter your name : " << endl;
                cin >> ws;
                getline(cin, name);

                cout << "Enter marks : " << endl;
                cin >> marks;
        }
        void display()
        {
            cout << "Roll no : " << roll_no << endl;
            cout << "Name : " << name << endl;
            cout << "Marks : " << marks << endl;
        }

};

int main()
{
    student s1;
    student s2;

    s1.getdata();
    s1.display();

    s2.getdata();
    s2.display();


    return 0;
}