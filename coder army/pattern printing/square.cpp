#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    cout<<"Enter the number of column:";
    cin>>a;

    cout<<"Enter the number of rows:";
    cin>>b;

    for(int j=1;j<=b;j++)
    {
        for(int i=1;i<=a;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}