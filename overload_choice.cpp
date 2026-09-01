// using function overloading through user's info

#include <iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}

int multiply(int a, int b, int c){
    return a*b*c;
}

int main(){
    int choice;
    cout<<"How many numbers you want to multiply?: ";
    cin>>choice;

    if (choice==2){
        int a,b;
        cout<<"Enter your numbers: ";
        cin>>a>>b;
        cout<<multiply(a,b)<<endl;  //two numbers
    }

    else if(choice==3){
        int a,b,c;
        cout<<"Enter your numbers: ";
        cin>>a>>b>>c;
        cout<<multiply(a,b,c)<<endl;  //three numbers
    }

    return 0;
}