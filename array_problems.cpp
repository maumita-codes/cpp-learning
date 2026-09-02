// solving array questions

#include<iostream>
using namespace std;
int main(){
    int no[4];  //finding largest number among numbers user provided
    for (int m=0; m<4; m++){
        cout<<"enter your numbers: "<<endl;
        cin>>no[m];
    }
    int max= no[0];
    for (int m = 1; m < 4; m++){
        if(no[m]>max){
            max=no[m];
        }
    }
    cout<<"The largest number is "<<max<<endl;

    int num[4];
    for(int n=0;n<4;n++){
        cout<<"enter your numbers: "<<endl;
        cin>>num[n];
    }
    int min= num[0];
    for(int n=1; n<4; n++){
        if(num[n]<min){
            min=num[n];
        }
    }
    cout<<"the smallest number is "<<min<<endl;
    
    return 0;
}