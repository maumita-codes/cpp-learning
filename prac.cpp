#include <iostream>
using namespace std;
int main(){
    //1. sum of factorials from one to n
    int n;
    long long fact=1;
    long long sum=0;
    cout<<"Enter your non negative number: "<<endl;
    cin>>n;
    for (int i=1; i<=n; i++){
        fact= fact*i;
        sum= sum + fact;
    }
    cout<<"sum of factorials: "<<sum <<endl;

    //2. sum of even factorials 
    int a;
    long long fac=1;
    long long summ=0;
    cout<<"Enter a non negative even number: "<<endl;
    cin>>a;
    for(int j=1; j<=a; j++){
        fac= fac*j;
        if(j%2==0){
            summ=summ+fac;
        }
    }
    cout<<"sum of even factorials."<< summ<<endl;

    //3.sum of squares 
    int f;
    int squ=1;
    long long summation=0;
    cout<<"Enter a non negative number: "<<endl;
    cin>>f;
    for(int s=1; s<=f; s++){
        squ= s*s;
        summation= summation+squ;
    }
    cout<<"sum of squares of numbers is: "<<summation<<endl;

    //4.armstrong number
    int g;
    int arm=1;
    long long summed=0;
    int original;
    cout<<"Enter a non negative three digit number: "<<endl;
    cin>>g;
    original = g;
    while(g>0){
        int digit=g%10;
        arm=digit*digit*digit;
        summed=summed+arm;
        g=g/10;
    }
    if(summed==original){
        cout<<"armstrong number ";
    }
    else{
        cout<<"not an armstrong number ";
    }

    //5. palindrome numbers
    int t;
    int reverse=0;
    cout<<"Enter a number: "<<endl;
    cin>>t;
    int orig=t;
    while(t>0){
        int digi=t%10;
        reverse=reverse*10 +digi;
        t=t/10;
    }
    if(reverse==orig){
        cout<<"It is a palindrome: "<<reverse<<endl;
    }
    else{
        cout<<"Not a palindrome."<<endl;
    }

    //6. counting how many digits are there in a number
    long long e;
    int count=0;
    cout<<"Enter a number: "<<endl;
    cin>>e;
    if(e==0){
        count=1;
    }
    else{
        for(;e>0;e=e/10){
            count++;
        }
    }
    /* the while loop will go like this:
        while(e>0){
        count+=1;
        e=e/10;
        }
    */
    cout<<"the number of digits in this number are: "<<count<<endl;

    //7. sum of the digits of a number
    int d;
    int add=0;
    cout<<"enter a number: "<<endl;
    cin>>d;
    for (; d>0; d=d/10){
        add+=d%10;
    }
    cout<<"the sum of the digits is: "<< add<<endl;

    //8. product of digits
    int p;
    int multiply=1;
    cout<<"Enter the number: "<<endl;
    cin>>p;
    int q;
    if(p==0){
        multiply= 0;
    }
    else{
        for(; p>0; p=p/10){
            q= p%10;
            multiply= multiply*q;
        } 
    }
    cout<<"The multiplication of the numbers is: "<<multiply<<endl;
    
    //9. combining the above three in one loop
    int c;
    int ct=0; 
    int addn=0;
    int mul=1;
    int h;
    cout<<"Enter the number: "<<endl;
    cin>>c;
    if(c==0){
        mul=0;
        sum=0;
        ct=1;
    }
    else{
        for(;c>0;c=c/10){
            h=c%10;
            ct=ct+1;
            addn=addn+h;
            mul=mul*h;
        }
    }
    cout<<"The number of digits are: "<<ct<<endl;
    cout<<"The sum of the digits is: "<<addn<<endl;
    cout<<"The product of the numbers is: "<<mul<<endl;

    //10. product of even digits 
    int u;
    int mult=1;
    cout<<"Enter the number: "<<endl;
    cin>>u;
    int x;
    bool found=false;
    if(u==0){
        mult= 0;
    }
    else{
        for(; u>0; u=u/10){
            x= u%10;
            if(x%2==0){
                mult=mult*x;
                found=true;
            }
        } 
        if(found){
            cout<<"The multiplication of the even digits is: "<<mult<<endl;
        }
        else{
            cout<<"no even digits"<<endl;
        }
    }

    return 0;
}