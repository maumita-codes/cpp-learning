// solving problems related to arrays

#include <iostream>
using namespace std;
int main(){
    int no[4];
    for (int m=0; m<4; m++){
        cout<<"enter your numbers: "<<endl;
        cin>>no[m];
    }
    int sum=0;
    for(int m=0;m<4;m++){
        sum=sum+no[m];
    }
    double average= (double)sum/4; //to give avg of given numbers by the user.
    cout<<"the average of the provided numbers is "<<average<<endl;

    int count=0;
    int ct=0;
    int num[5];
    for (int i=0;i<5;i++){
        cout<<"Enter your numbers: "<<endl;
        cin>>num[i];
        if(num[i]%2==0){
        count=count+1;
        }                //counts even-odd numbers given
        else{
            ct=ct+1;
        }
        cout<<"even numbers: "<<count<<endl;
        cout<<"odd numbers:"<<ct<<endl;

    }

    int number[5];
    for(int p=0;p<5;p++){
        cout<<"Enter your numbers: "<<endl;
        cin>>number[p];
    }
//it checks whether the no. user wants to check is present in the user provided array or not

    int search;
    cout<<"enter the number you want to search: "<<endl;
    cin>>search;
    bool found=false;
    for(int p=0; p<5;p++){
        if(number[p]==search){
            found=true;
        }
    }
    if(found){
        cout<<"found"<<endl;
    }      
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}