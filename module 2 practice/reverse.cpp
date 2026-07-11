//Reverse a Number

#include <iostream>
using namespace std;

int main(){
    int n , reverse=0,digit;
    cout<<"Enter the number:";
    cin>>n;

    while(n>0)
    {
        digit=n%10;                  /*n = 1234
Step 1

Last digit nikalo:

digit = 1234 % 10;
digit = 4

Ab reverse me 4 daal do:

reverse = reverse * 10 + digit;
reverse = 0 * 10 + 4
        = 4

Box:

reverse = 4
Step 2

Ab:

n = 123
digit = 3

Question:

Agar reverse me pehle se 4 hai aur mujhe 3 add karna hai, to 43 kaise banaun?

Sirf:

reverse = reverse + digit;

karoge to:

4 + 3 = 7

Galat.

Trick

Pehle 4 ko ek place left shift karo:

4 → 40

Programming me:

4 * 10 = 40

Ab 3 add karo:

40 + 3 = 43

Yahi hai:

reverse = reverse * 10 + digit;
Step 3

Ab:

reverse = 43
digit = 2

43 ko left shift:

43 → 430
43 * 10 = 430

2 add:

430 + 2 = 432
Step 4
432 * 10 + 1
= 4321

Done.*/
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<reverse;

    return 0;
}