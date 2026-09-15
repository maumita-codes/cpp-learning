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
    
//pointer arithmatic
    int arr[5]={10,20,30,40,50};
    int *ptr=arr;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*ptr+5<<endl;
    cout<<*(ptr+4)+10<<endl;

//changing pointer values
    int x=5;
    int y=15;
    int *ptr1=&x;
    int *ptr2=&y;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    *ptr1=25;
    *ptr2=35;
    cout<<x<<endl;
    cout<<y<<endl;

//pointer swapping
    int a = 10;
    int b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;
    cout<<a<<endl;
    cout<<b<<endl;

    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<a<<endl;
    cout<<b<<endl;

//sum of all elements in an array
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int sum= *ptr + *(ptr + 1) + *(ptr + 2) + *(ptr + 3) + *(ptr + 4);
    cout<<sum<<endl;

//finding the largest element in an array
    int arr[5] = {15, 42, 7, 89, 31};
    int *ptr = arr;
    int largest = *ptr;

    for(int i = 1; i < 5; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    cout<<largest<<endl;
    
//counting even numbers
    int arr[6] = {12, 7, 18, 25, 30, 41};
    int *ptr = arr;
    int even=0;
    for(int m=0;m<6;m++){
        if(*(ptr + m) % 2 == 0){
            even++;
        }
    }
    cout<<even<<endl;


    return 0;
}