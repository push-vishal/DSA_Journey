#include <iostream>
using namespace std;
int main(){

    const float pi = 3.14; //pi is a constant variable, its value cannot be changed
    cout << "The value of pi is: " << pi << endl;
    //pi = 3.14159; //This will cause a compile-time error because pi is a constant variable
    return 0;
}