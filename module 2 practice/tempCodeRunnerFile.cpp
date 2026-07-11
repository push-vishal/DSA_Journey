//Palindrome number

#include <iostream>
using namespace std;

int main(){
    int n,Palindrome=0,digit;
    cout<<"Enter the number:";

    while(n>0)
    {
        digit=n%10;
        Palindrome=Palindrome*10+digit;
        n=n/10;
    }
    if(Palindrome=n){
        cout<<"the number is Palindrome";
    }
    return 0;
}