#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) 
    {
        // Inner loop 1: Print leading spaces
        for (int space = 1; space <= rows - i; ++space) 
        {
            cout << " ";
        }
        // Inner loop 2: Print stars
        for (int j = 1; j <= i; ++j) 
        {
            cout << "* ";
        }
        // Move to the next line
        cout << "\n";
    }
    return 0;
}
