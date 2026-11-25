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
 
    //11. counting even and odd digits
    int k;
    int coun=0;
    int cnt=0;
    int b;
    cout<<"Enter a number: "<<endl;
    cin>>k;
    if(k==0){
        coun=1;
    }
    else{
        for(; k>0; k=k/10){
            b= k%10;
            if(b%2==0){
                coun=coun+1;
            }
            else if(b%2==1){
                cnt=cnt+1;
            }
        }
    }
    cout<<"Number of even digits in the number: "<<coun<<endl;
    cout<<"Number of odd digits in a number: "<<cnt<<endl;

    //12. difference between sum of even and ood digits of a number
    int s;
    int sct=0;
    int oct=0;
    int diff;
    cout<<"enter a number: "<<endl;
    cin>>s;
    int z;
    if(s==0){
        sct=0;
    }
    else{
        for (; s>0; s=s/10){
            z=s%10;
            if(z%2==0){
                sct=sct+z;
            }
            else{
                oct=oct+z;
            }
        }
    }
    if(sct>oct){
        diff=sct-oct;
    }
    else{
        diff=oct-sct;
    }
    cout<<"the difference between the sum of even and odd digits is: "<< diff <<endl;

    //13.count digits divisible by 3, 5 or both
    //divisible by 3
    int y;
    cout<<"Enter a number: "<<endl;
    cin>>y;
    int v;
    int d3=0;
    int d5=0;
    int db=0;
    if(y==0){
        db=1;
        d3=1;
        d5=1;
    }
    else{
        for(; y>0; y=y/10){
            v= y%10;
            if(v==0){
                d3=d3+1;
                d5=d5+1;
                db=db+1;
            }
            else{
                if(v%3==0 && v%5==0){
                    db=db+1;
                    d3=d3+1;
                    d5=d5+1;
                }
                else if(v%5==0){
                    d5=d5+1;
                }
                else if(v%3==0){
                    d3=d3+1;
                }
            }
        }
    }
    cout<<"no.of digits divisible by 3: "<<d3<<endl;
    cout<<"no.of digits divisible by 5: "<<d5<<endl;
    cout<<"No.of digits divisible by both: "<<db<<endl;

    //14. find the largest and smallest digit in a number
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    int num=number%10;
    int large=num;
    int small=num;
    
    if(number==0){
        large=0;
        small=0;
    }
    else{
        for(; number; number=number/10){
            num=number%10;
            if(num>large){
                large=num;
            }
            if(num<small){
                small=num;
            }
        }
  
    }
    cout<<"the largest digit in the number: "<<large<<endl;
    cout<<"The smallest digit in the number: "<<small<< endl;

    //15. counting the frquency of a digit in a number.
    int num1, tofind;
    cout<<"Enter a number: "<<endl;
    cin>>num1;
    cout<<"Enter the number whose frequency you want to find: "<<endl;
    cin>>tofind;
    int w;
    int counts=0;
    if(num1<0){
        num1=-num1;
    }
    if(num1==0){
        if(tofind==0){
            counts=1;
        }
        else{
            counts=0;
        }
        w=0;
    }
    else{
        for(; num1>0; num1=num1/10){
            w=num1%10;
            if(w==tofind){
                counts=counts+1;
            }
        }
    }
    cout<<"The frequency of the number "<<tofind<<" is "<<counts<<endl;

    //16.to find the first and last digit of a number
    int r;
    int first;
    int last;
    cout<<"Enter a number: "<<endl;
    cin>>r;
    last=r%10;
    if(r==0){
        first=0;
        last=0;
    }
    else{
        while(r>9){
            r=r/10;
        }
        first=r;
    }
    cout<<"First digit: "<<first<<endl;
    cout<<"Last digit: "<<last<<endl;

    //16.to find the first and last digit of a number
    //doing arithmatic operations on the numbers
    int R;
    int First;
    int Last;
    int Sum;
    int Product;

    cout<<"Enter a number: "<<endl;
    cin>>R;
    Last=R%10;
    if(R==0){
        First=0;
        Last=0;
    }
    else{
        while(R>9){
            R=R/10;
        }
        First=R;
    }
    Sum=First+Last;
    Product=First*Last;
    
    cout<<"the sum of first and last digit of a number is: "<<Sum<<endl;

    cout<<"The product of the first and last digit is: "<<Product<<endl;

    return 0;
}