//using ternary objects instead of if-else

#include <iostream>
using namespace std;
int main(){
//to check if a number given by the user is positive or negative

    int num;
    cout<<"Enter your number other than zero: "<<endl;
    cin>>num;
    num>0 ? cout<<"The number is positive.":cout<<"The number is negative.";

//to check if a number is even or odd
    int number;
    cout<<"Enter your number other than zero: "<<endl;
    cin>>number;
    number%2==0 ? cout<<"The number is even." : cout<<"The number is odd.";

    return 0;
}