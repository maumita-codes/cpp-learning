#include <iostream>
using namespace std;
int main(){
    // int y;
    // cout<<"Enter the number: "<<endl;
    // cin>>y;
    // int *ptr=&y;
    // int z;
    // cout<<"enter another value: "<<endl;
    // cin>>z;
    // *ptr=z;
    // cout<<"the current data is: "<<*ptr<<endl;

    int x;
    cout<<"Enter your number: "<<endl;
    cin>>x;
    int *ptr=&x;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout << "Address stored in ptr: " << ptr << endl;
    int h;
    cout<<"enter another value: "<<endl;
    cin>>h;
    *ptr=h;
    cout<<"the current data is: "<<*ptr<<endl;
    return 0;
}