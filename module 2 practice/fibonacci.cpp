//0 1 1 2 3 5 8 13 21 ...

/*
    0 + 1 = 1
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8*/

#include <iostream>
using namespace std;

int main(){
    int a=0, b=1 , c=0,n;
    cin>>n;

    cout << a << " " << b << " ";

    for(int i=1;i<n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}