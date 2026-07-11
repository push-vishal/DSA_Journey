#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    if(age<1){
        cout<<"You are not born yet."<<endl;
    }
    else if(age<18){
        cout<<"You can not come to my party."<<endl;
    }
    else{
        cout<<"You can come to my party."<<endl;
    }
    return 0;
}