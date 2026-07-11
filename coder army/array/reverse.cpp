#include <iostream>
using namespace std;

int main(){
    int arr[6]={5,4,7,8,9,0};
    int temp[6];
    int i=5 , j=0;

    cout<<"Original array element :";
    for(int i=0;i<6;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;

    //array ke element reverse order me temp ke order me dalo
    while(i>=0)
    {
        temp[j]=arr[i];
        j++;
        i--;
    }

    // Temp print karo
    cout << "Temp Array : ";
    for(int i = 0; i < 6; i++)
    {
        cout << temp[i] << " ";
    } 
    cout << endl;

     //temp ke element array me daloo
    for(int i = 0; i < 6; i++)
    {
    arr[i] = temp[i];
    }

     //array print kro
    cout<<"array reverse element :";
    for(int i = 0; i < 6; i++)
    {
    cout << arr[i] << " ";
    }
    
}