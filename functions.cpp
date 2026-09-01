#include <iostream>
using namespace std;
void greet(string name){
    cout<<"Hello "<<name<<"!"<<endl;
}
int square(int n){
    return n*n;
}
int add(int a,int b){
    return a+b;
}

int main(){
    greet("Alex");
    greet("Sam");

    int result= square(6);
    cout<<result<<endl;

    int m,n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    int addn= add(m,n);
    cout<<addn;
    return 0;
}