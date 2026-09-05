#include <iostream>
using namespace std;
int main(){
    //for one word to appear in different lines
    string name;
    cout<<"Enter your word: "<<endl;
    cin>>name;
    for(int i=0;i<name.length();i++){
        cout<<name[i]<<endl;
    }
    //for making the whole sentence appear by the user
    string sentence;
    cout<<"Enter your sentence: "<<endl;
    getline(cin,sentence);
    cout<<"Your sentence is: "<<sentence<<endl;

    //To change some characters in a string
    string word;
    cout<<"Enter a word: "<<endl;
    cin>>word;
    word[0]='X';
    cout<<"Now your word is: "<<word<<endl;

    //to find the number of a's in a string or a sentence
    int count=0;
    string line;
    cout<<"Enter your sentence: "<<endl;
    getline(cin,line);
    for(int m=0;m<line.length();m++){
        if(line[m]=='a'){
            count=count+1;
        }   
    }
    cout<<"The number of a in the sentence:"<<count<<endl;

    //to check the number of vowels in a string
    int cnt=0;
    string len;
    cout<<"Enter your sentence: "<<endl;
    getline(cin,len);
    for(int p=0;p<len.length();p++){
        if(len[p]=='a'||len[p]=='e'||len[p]=='i'||len[p]=='o'||len[p]=='u'||len[p]=='A'||len[p]=='E'||len[p]=='I'||len[p]=='O'||len[p]=='U'){
            cnt=cnt+1;
        }   
    }
    cout<<"The number of vowels in a sentence is:"<<cnt<<endl;

    //to count the number of spaces between words
    int ct=0;
    string ln;
    cout<<"Enter your sentence: "<<endl;
    getline(cin,ln);
    for(int l=0;l<ln.length();l++){
        if(ln[l]==' '){
            ct=ct+1;
        }   
    }
    cout<<"The number of spaces in the snetence is:"<<ct<<endl;

    //counting number of words in a sentence
    int counter=0;
    string sen;
    cout<<"Enter your sentence: "<<endl;
    getline(cin,sen);
    for(int j=0;j<sen.length();j++){
        if(sen[j]==' '){
            counter++;
        }
    }
    cout<<"The number of words int the sentence is: "<<counter+1<<endl;

    
    return 0;
}