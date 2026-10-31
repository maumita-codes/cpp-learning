#include <iostream>
using namespace std;
int main(){
    int n;
    long long fact=1;
    long long sum=0;
    cout<<"Enter your non negative number: "<<endl;
    cin>>n;
    for (int i=1; i<=n; i++){
        fact= fact*i;
        sum= sum + fact;
    }
    cout<<"sum of factorials: "<<sum <<endl;
    return 0;
}