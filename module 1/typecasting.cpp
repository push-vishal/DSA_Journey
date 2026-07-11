#include <iostream>
using namespace std;
int main()
{
    int a=45;
    float b=45.5;
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of b is: "<<(int)b<<endl;

    cout<<"The expression is: "<<a+b<<endl; // here a is int and b is float so a will be converted to float and then addition will be done
    cout<<"The value of a+int(b): "<<a+(int)b<<endl;

    return 0;
}