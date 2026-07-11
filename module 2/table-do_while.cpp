#include <iostream>
using namespace std;

int main()
{
    int a,i=1;
    cout<<"Enter the number:";
    cin>>a;

    do{
        cout<<i*a<<endl;
        i++;
    }while(i<=10);
    return 0;
}