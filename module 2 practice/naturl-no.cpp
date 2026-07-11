//sum of 1st n natural no.


#include <iostream>
using namespace std;

int main(){
    // int n,sum;
    // cout<<"Enter the value of n:";
    // cin>>n;
    // sum= (n*(n+1))/2;
    // cout<<"sum of 1st "<<n<<" natural number is:"<<sum;

    int n,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}