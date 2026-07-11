#include <iostream>
using namespace std;

int main(){
    int row,col,n;

    cout<<"Enter the number of rows:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)     //space
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)      //   cout<<row;   cout<<col;
        {
            cout<<row;
        }
        cout<<endl;
    }
    return 0;
}