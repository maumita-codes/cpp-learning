//using break and continue functions 

#include<iostream>
using namespace std;
int main(){
    int i=1;   //using break
    while(i<=10){
        cout<<i<<endl;
        if(i==5){
            break;
        }
        i++;
    }

    int p=0;   //using continue
    while(p<5){
        p++;
        if(p==3){
            continue;
        }
        cout<<p<<endl;
    }

    int n=0;   //using both together 
    while(n<=10){
        n++;
        if(n==5){
            continue;
        }
        cout<<n<<endl;
        if(n==8){
            break;
        }
    }
    return 0;
}