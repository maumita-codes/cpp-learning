//to check if a no is prime or not

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter your number: ";
    cin>>number;
    if(number<2){
        cout<<"The given number is not prime.";
    }
    else{
        bool isPrime = true;
    for(int i=2; i<number; i++){  
        if(number%i==0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<"The given number is prime.";
    }
    else{
        cout<<"The given number is not prime.";
    }
    }
        return 0;
    }