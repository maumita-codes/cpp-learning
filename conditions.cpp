//using conditions like if else

#include<iostream>
using namespace std;
int main(){
    int age;  //example
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You're an adult.";
    }
    else{
        cout<<"You're a minor.";
    }

    int number;
    cout<<"Enter your number: ";
    cin>>number;
    if(number>0){
        cout<<"The number you provided is positive.";
    }
    else if(number==0){
        cout<<"The number you provided is zero.";
    }
    else{
        cout<<"The number you provided is negative.";
    }
    return 0;
}