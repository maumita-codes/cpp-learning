#include<iostream>
#include<vector>
using namespace std;
int main(){
//printing a vector in separate lines
    vector<int> numbers={5,10,15,20,25};
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<endl;
    }

//adding an element in the vector
    vector<int> numb={3,6,9,12,15};
    numb.push_back(18);
    for(int m=0;m<numb.size();m++){
        cout<<numb[m]<<endl;
    }

//to remove the last element from the vector
    vector<int> num={3,6,9,12,15,18,21};
    num.pop_back();
    for(int j=0;j<num.size();j++){
        cout<<num[j]<<endl;
    }
    return 0;
}