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
    double average= (double)sum/4;
 //to give avg of given numbers by the user.
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

// to give the reverse order in the output of the array user provides
    int n[5];
    for(int a=0;a<5;a++){
        cout<<"Enter your numbers: "<<endl;
        cin>>n[a];
    }
    cout<<"the reverse order is:"<<endl;
    for(int a=4;a>=0;a--){
        cout<<n[a]<<endl;
    }
      
 // to provide the number of occurances of numbers in the array provided by the user
    int cn=0;
    int numb[5];
    for(int b=0;b<5;b++){
        cout<<"Enter your numbers: "<<endl;
        cin>>numb[b];
    }
    int sear;
    cout<<"Which number do you want to count? ";
    cin>>sear;
    for(int b=0;b<5;b++){
        if(numb[b]==sear){
            cn++;
        }
    }
    cout << search << " appears " << cn << " times." << endl;

    return 0;
}