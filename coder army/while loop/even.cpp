#include <iostream>
using namespace std;

int main(){
    int i=1,n ;
    cout<<"Enter the number :";
    cin>>n;

    while(i<=n)
    {
        if(i%2==0)
        cout<<"Even no. are :" <<i<<" ";
        i++;
    }
    return 0;
}