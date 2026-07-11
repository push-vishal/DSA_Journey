#include <iostream>
using namespace std;

int main(){
    char name='a';

    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            name='a'+(col-1);      //'coutna'+(row-1)
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}