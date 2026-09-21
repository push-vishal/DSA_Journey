#include <iostream>
using namespace std;

void print(int n)
{
    if(n == 0)
        return;

    print(n - 1);
    int sum;
    sum= (n(n+1))/2;
    cout << sum;
}

int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    print(a);
}