// Using variables like int,float,doube,char,bool,string in one word as well as in a sentence 

#include<iostream>
#include<string>
using namespace std;
int main(){
    float temperature;  //using float
    cout <<"Enter the temperature: ";
    cin >> temperature;
    cout <<"The temperature you entered is "<<temperature<<endl;
   
    double height;  //using double
    cout<<"Enter your height: ";
    cin>> height;
    cout<<"Your height is "<<height<<endl;

    char initial;  //using char
    cout <<"Enter your name initial: ";
    cin >> initial;
    cout <<"Your name's initial is "<<initial<<endl;

    bool state;  //using bool
    cout<<"Enter the statement: ";
    cin>> state;
    cout << boolalpha <<"Your statement is "<<state<<endl;

    string name;  //for one word
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    string sentence;
    cout<<"Enter your sentence: ";
    getline(cin,sentence);
    cout<<"Your sentence is "<<sentence<<endl;
    return 0;
}