#include <iostream>
using namespace std;    
int main()
{
    int a=5;\
    int &b=a; // reference variable b is referring to a
    cout<<"The value of a is: "<<a<<endl;   
    cout<<"The value of b is: "<<b<<endl;    // b is reference variable so it will give the value of a

    return 0;
}