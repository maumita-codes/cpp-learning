#include<iostream>
#include<vector>
using namespace std;
int main(){
//printing a vector in separate lines
    vector<int> numbers={5,10,15,20,25};
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<endl;
    }
    return 0;
}