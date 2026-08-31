//using do-while loop 

#include<iostream>
using namespace std;
int main(){
    int i=1;   //practice 
    do{
        cout<<i<<endl;
        i++;
    } while(i<=5);

    int num;   //ask for a no. from user until its 0
    do{
        cout<<"Enter a number: ";
        cin>>num;
    } while(num!=0);
    cout<< "done!";

    int number;  //to check if a no. is positive or not
    do{
        cout<<"Enter your number: ";
        cin>>number;
        if(number>0){
            cout<<"Positive number."<<endl;
        }
        else if(number<0){
            cout<<"Negative number."<<endl;
        }
    }while(number!=0);
    return 0;
}