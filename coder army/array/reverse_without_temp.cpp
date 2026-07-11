#include <iostream>
using namespace std;

int main(){
    int arr[6]={11,4,9,5,8,20};
    int i=0,j=5;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}