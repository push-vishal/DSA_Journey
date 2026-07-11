#include <iostream>
#include <climits>
using namespace std;

int main(){
    int x ;
    cout<<"Enter the X :";
    cin>>x;

    int arr[]={5,20,34,35,56,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x)
        cout<<i;
    }
    cout<<"NOT VALID";
}