// using arrays for storing multiple numbers

#include <iostream>
using namespace std;
int main(){
    int numbers[5]={45,67,90,87,12};
    for(int i=0; i<5; i++){
        cout<<numbers[i]<<endl;
    }

    int num[4]; //takes numbers form user and prints it
    for (int p=0; p<4;p++){
        cout<<"Enter your numbers: "<<endl;
        cin>>num[p];
    }
    cout<<"your numbers are: "<<endl;
    for (int p = 0; p < 4; p++) {
    cout << num[p]<< endl;
    }

    int no[4];
    for (int m=0; m<4; m++){
        cout<<"enter your numbers for sum: "<<endl;
        cin>>no[m];
    }
    int sum=0;
    for(int m=0;m<4;m++){
        sum=sum+no[m];
    }
    cout<<"The sum of the numbers provided: "<<endl;
    cout<<sum<<endl;
    return 0;
}