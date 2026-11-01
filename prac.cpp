#include <iostream>
using namespace std;
int main(){
    //1. sum of factorials from one to n
    // int n;
    // long long fact=1;
    // long long sum=0;
    // cout<<"Enter your non negative number: "<<endl;
    // cin>>n;
    // for (int i=1; i<=n; i++){
    //     fact= fact*i;
    //     sum= sum + fact;
    // }
    // cout<<"sum of factorials: "<<sum <<endl;

    //2. sum of even factorials 
    int a;
    long long fac=1;
    long long summ=0;
    cout<<"Enter a non negative even number: "<<endl;
    cin>>a;
    for(int j=1; j<=a; j++){
        fac= fac*j;
        if(j%2==0){
            summ=summ+fac;
        }
    }
    cout<<"sum of even factorials."<< summ<<endl;

    return 0;
}