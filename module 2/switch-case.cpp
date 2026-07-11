#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice:" << endl;
    cout << "1. Tea" << endl;
    cout << "2. Coffee" << endl;
    cout << "3. Milk" << endl;

    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected Tea" << endl;
            break;

        case 2:
            cout << "You selected Coffee" << endl;
            break;

        case 3:
            cout << "You selected Milk" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }
    cout << "Thank you for your selection!" << endl;

    return 0;
}