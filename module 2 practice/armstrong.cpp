/*Armstrong number  : An Armstrong number (also known as a narcissistic number) is a number that equals 
the sum of its own digits, where each digit is raised to the power of the total number of digits*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,digit,arm=0,count=0;
    cout<<"Enter the number:";
    cin>>n;
    int a=n;
    int original=n;

    while(n>0)
    {
        n=n/10;
        count++;
        
    }

    while (a>0)
        {
            digit=a%10;
            arm=arm+round(pow(digit , count));
            a=a/10;
        }
        cout << "Count = " << count << endl;
        cout << "Arm = " << arm << endl;
        cout << "Original = " << original << endl;
        if(arm==original)
        {
            cout<<"The number is Armstrong";
        }
        else
    { 
    cout << "The number is not Armstrong";
    } 
    return 0;
}