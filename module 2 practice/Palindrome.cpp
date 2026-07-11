//Palindrome number

#include <iostream>
using namespace std;

int main(){
    int n,Palindrome=0,digit;
    cout<<"Enter the number:";
    cin>>n;
    int original=n;

    while(n>0)
    {
        digit=n%10;
        Palindrome=Palindrome*10+digit;
        n=n/10;
    }
    
    if(Palindrome==original){
        cout<<"the number is Palindrome";
    }
    else
    {
    cout << "The number is not Palindrome";
    }
    return 0;
}