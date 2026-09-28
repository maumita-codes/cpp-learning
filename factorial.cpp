#include <iostream>
using namespace std;
    int factorial(int n){
        if(n==0)
           return 1;
        return n*factorial(n-1);
    }

    int reverse(int n,int rev=0){
        if(n==0)
           return rev;
        return reverse(n/10, rev*10+n%10);
    }
int main(){

    int g;
    cout<<"Enter a number whose factorial is needed: "<<endl;
    cin>>g;
    cout<<"The factorial of "<<g<<" is "<<factorial(g)<<endl;

    int n;
    cout<<"Enter a number to be reversed: "<<endl;
    cin>>n;
    cout<<"The reversed number is: "<<reverse(n);
    return 0;
}