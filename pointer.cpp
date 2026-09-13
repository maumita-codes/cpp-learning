//pointers

#include <iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the number: "<<endl;
    cin>>y;
    int *ptr=&y;
    int z;
    cout<<"enter another value: "<<endl;
    cin>>z;
    *ptr=z;;
    cout<<"the current data is: "<<*ptr<<endl;

//address of x

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

//changing the value of the pointer

    int a;
    cout<<"Enter your number: "<<endl;
    cin>>a;
    int *ptr=&a;
    cout<<"value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address stored in ptr: "<<ptr<<endl;
    *ptr= a +10;
    cout<<"The changed value of a is: " <<*ptr<<endl;

//to double the value of the pointer
    int v;
    cout<<"Enter the number: "<<endl;
    cin>>v;
    int *ptr=&v;
    cout<<"The value of v: "<<v<<endl;
    cout<<"Address of v: "<<&v<<endl;
    cout<<"The address stored in ptr: "<<ptr<<endl;
    *ptr=v*2;
    cout<<"The changed value of v is: "<<*ptr<<endl;


//to double the value of the pointer
    int v;
    cout<<"Enter the number: "<<endl;
    cin>>v;
    int *ptr=&v;
    cout<<"The value of v: "<<v<<endl;
    cout<<"Address of v: "<<&v<<endl;
    cout<<"The address stored in ptr: "<<ptr<<endl;
    *ptr=v*2;
    cout<<"The changed value of v is: "<<*ptr<<endl;
    
    return 0;
}