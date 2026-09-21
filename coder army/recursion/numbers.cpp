#include <iostream>
using namespace std;

void print(int n)
{
    if(n == 0)
        return;

    // print(n - 1);
    cout << n << " ";
    // print(n - 1);
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    print(a);
}