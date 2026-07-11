#include <iostream>
using namespace std;

int main(){
    int marks[]={50,80,99,88};
    int* p=  marks;

    cout<<*(p++);
    return 0;
}