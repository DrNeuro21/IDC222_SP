#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<float> cart;
    int choice;
    float price;

    do 
    {
        cout << "1. Add Item" << endl;
        cout << "2. Remove last item" << endl;
        cout << "3. Display Cart Details" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;


        switch(choice)
        {
            case 1:
                cout << "Enter item price" << endl;
                cin >> price;

                cart.push_back(price);
                cout << "Item added!" << endl;

                break;

            case 2:
            if(!cart.empty())
            {
                cart.pop_back();
                cout << "Last item removed" << endl;
            }
            else
            {
                cout << "Cart is already empty" << endl;
            }
            break;

            case 3:
            {
            cout << "Items in cart" << cart.size() << endl;

                float total = 0;
                for ( float p : cart )
                     {
                         total = total + p;
                     }

            cout << "Total Billing amount : " << total << endl;
                    }
            break;

            case 4:
                cout << "Exiting.. TC" << endl;
            break;

            default:
            cout << "Invalid choice" << endl;
            
        }
    }
    while (choice != 4);

    return 0;
}