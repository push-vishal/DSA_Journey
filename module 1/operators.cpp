#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 5;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl; //modulo operator gives the remainder of the division of a by b
    cout << "The value of a++ is " << a++ << endl;  // o/p=4 but current value is a=5
    cout << "The value of a-- is " << a-- << endl;  // current value is a=5  so o/p a=5 but after this line a=4
    cout << "The value of ++a is " << ++a << endl;  // current value is a=4 so o/p a=5 but after this line a=5
    cout << "The value of --a is " << --a << endl;  // current value is a=5 so o/p a=4 but after this line a=4
    return 0;
}