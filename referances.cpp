//using referances for assigning variables

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your number: "<<endl;
    cin>>x;
    int &y=x;
    cout<<"enter your referance number: "<<endl;
    cin>>y;

    cout << "Original variable x after change: " << x << endl;

    cout << "Reference variable y: " << y << endl;
    return 0;
}