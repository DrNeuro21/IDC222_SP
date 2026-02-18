#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> marks;
    int m, n;
    
    cout << "Enter no of studets : " << endl;
    cin >> n;

    cout << "Eneter marks : " << endl;
    for( int i = 0; i < n ; i++)
    {
        cin >> m;
        marks.push_back(m);
    }

    cout << "Student marks : " << endl;
    for( auto it = marks.begin(); it != marks.end(); it++)
    {
        cout << *it << " " << endl;
    }

    cout << endl;

    int maxmarks = *marks.begin();
    int minmarks = *marks.begin();

    for(auto it = marks.begin(); it != marks.end(); it++)
    {
        if(*it > maxmarks)
        {
            maxmarks = *it;
        }
        if (*it < minmarks)
        {
            minmarks = *it;
        }
    }

    cout << "highest marks : " << maxmarks << endl;
    cout << "lowest marks " << minmarks << endl;

    return 0;
}