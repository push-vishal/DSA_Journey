#include <iostream>
#include <vector>
using namespace std;

int main(){

    //creating a Vector
    vector<int> V;

    V.push_back(2);
    V.push_back(3);
    V.push_back(4);

    cout<<"Size of V :"<<V.size()<<endl;
    cout<<"Capacity of V :"<<V.capacity()<<endl;

    //update value
    V[1]=5;

    //creating vector array with size
    vector<int> arr(5 , 1);

    cout<<"Size of array :"<<arr.size()<<endl;
    cout<<"Capacity of array :"<<arr.capacity()<<endl;

    arr.push_back(7);

    cout<<"Size of array :"<<arr.size()<<endl;
    cout<<"Capacity of array :"<<arr.capacity()<<endl;

    vector<int> Vishal = { 1 , 3 , 5 , 7};
    cout<<"Size of Vishal :"<<Vishal.size()<<endl;
    cout<<"Capacity of Vishal :"<<Vishal.capacity()<<endl;
    
    return 0;
}