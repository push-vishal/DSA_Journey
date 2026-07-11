#include <iostream>
using namespace std;

int c=45; // global variable

int main()
{
    int a,b,c;
    cout<<"Enter the value of a & b: ";
    cin>>a>>b;
    c=a+b;
    cout<<"The sum of a and b is: "<<c<<endl; // this c is local variable
    cout<<"The value of global variable c is: "<<::c; // to access global variable we use scope resolution operator(::)
    return 0;
}