#include <iostream>
using namespace std;
int main(){
    int number1, number2;
    cout<<"Enter the numbers: "<<endl;
    cin>>number1>>number2;
    if(number1>0 && number2>0){
        cout<<"both are positive."<<endl;
    }
    else if(number1<0 && number2>0){
        cout<<"number1 is negative and number2 is positive."<<endl;
    }
    else if(number1>0 && number2<0){
        cout<<"number1 is positive and number2 is negative."<<endl;
    }
    else{
        cout<<"both numbers are negative."<<endl;
    }
    return 0;

}