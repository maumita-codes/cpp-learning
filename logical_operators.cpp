// using logical operators
#include <iostream>
using namespace std;
int main(){
//whether number is positve or negative
//using &&
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

//checking number is positive or not using !
    int number;
    cout<<"Enter your number: "<<endl;
    cin>>number;
    if(!(number>0)){
        cout<<"The number is not positive."<<endl;
    }
    else{
        cout<<"The number is positive."<<endl;
    }

//nested if 
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age>=18){
        if(age>=65){
            cout<<"You are senior citizen."<<endl;
        }
        cout<<"you are eligible for registration."<<endl;
        
    }
    return 0;
}