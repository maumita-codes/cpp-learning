//creating a multiplication table of the number the user provides.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int i=1;
    while(i<=10){
        cout<< num<< "x"<< i<<"="<< num*i<<endl;
        i++;
    }
    return 0;
}