#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        int no;
        string name;
        int marks;

    public:
        void setdata(int r, string n, int m)
        {
            no = r;
            name = n;
            marks = m;

        }
        void display()
        {
            cout << "Roll no : " << no << endl;
            cout << "Name " << name << endl;
            cout << "marks" << marks << endl;
        }
};

int main()
{
    student s1;

    s1.setdata(137, "Meetanshu", 99);
    s1.display();

    return 0;
}