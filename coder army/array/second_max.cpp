#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={3,6,9,29,25,28};
    int ans=-1;

    for(int i=0 ; i<6;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    int second= -1;
    for(int i=0;i<6;i++)
    {
        if(arr[i]!=ans)
        second = max(second ,arr[i]);;
    }
    cout<<second;
    3
    return 0;
}