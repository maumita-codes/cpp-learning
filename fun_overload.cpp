#include <iostream>
using namespace std;
int multiply(int a, int b){
    return a*b;
}
int multiply(int a, int b, int c){
    return a*b*c;
}

int main(){
    int a,b,c;
    cout<<"Enter your numbers: ";
    cin>>a>>b>>c;
    cout<<multiply(a,b)<<endl;  //prints of two numbers
    cout<<multiply(a,b,c)<<endl;//prints of three 
    return 0;

}
