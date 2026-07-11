/* In the do while loop execute once before checking of condition*/

#include <iostream>
using namespace std;

int main()
{
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=50);  // while(false);   o/p: 1
    return 0;
}