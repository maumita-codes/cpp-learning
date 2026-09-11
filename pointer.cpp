#include <iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the number: "<<endl;
    cin>>y;
    int *ptr=&y;
    int z;
    cout<<"enter another value: "<<endl;
    cin>>z;
    *ptr=z;
    cout<<"the current data is: "<<*ptr<<endl;
    return 0;
}