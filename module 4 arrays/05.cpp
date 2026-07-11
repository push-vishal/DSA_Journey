//pointers and arrays

#include <iostream>
using namespace std;

int main(){
    int marks[]={50,80,99,88};
    int* p=  marks;
    
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;


    return 0;
}