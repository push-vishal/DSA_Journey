#include <iostream>
using namespace std;

int main(){
    int n;
    bool isprime=true;
    cin>>n;

    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
    {
    cout<<n<<" is prime";
    }
    else
    {
    cout<<n<<" is not prime";
    }
    return 0;
}