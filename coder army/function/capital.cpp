#include <iostream>
using namespace std;

char convert(char name)
{
    char ans = name - 'a'+ 'A';   // a= 97  A= 65  
    return ans ;
}

int main(){
    char name;
    cin>>name;
    cout<<convert(name);
    return 0;
}