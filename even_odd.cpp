// to check whether a number is even or odd
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    if(num%2==0){
        cout<<"The number is even.";
    }
    else{
        cout<<"The number is odd.";
    }
    return 0;
}