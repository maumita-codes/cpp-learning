#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;
class Employee{
public:
    string name;
    Employee(string n){
        name=n;
    }
    virtual void work(){
        cout<<"The employee is working."<<endl;
    }
    virtual ~Employee(){}
};
class Developer: public Employee{
public:
    Developer(string n): Employee(n){
    
    }
    void work(){
        cout<<"Developer is writing code."<<endl;
    }
};

class Box{
public:
    int* value;
    Box(int v){
        value=new int(v);
    }
    Box& operator=(const Box& b){
        if(this != &b){
            delete value;
            value=new int(*b.value);
        }
        return *this;
    }
    ~Box(){
        delete value;
    }
    Box(Box&& b){
        value=b.value;
        b.value=nullptr;
    }
    Box& operator=(Box&& b){
        if(this != &b){
            delete value;
            value=b.value;
            b.value=nullptr;
        }
        return *this;
    }
};

template <typename T>
T multiply(T a, T b){
    return a*b;
};

template <typename M, typename U>
auto add(M p, U q){
    return p+q;
};

template <typename S>
class Storage{
public:
    S value;
    Storage(S v){
        value=v;
    }
    void show(){
        cout<< value <<endl;
    }
};

//TEMPLATE SPECIALISATION
template <>
class Storage<string>{
public:
    string value;
    Storage(string v){
        value=v;
    }
    void show(){
        cout<<"Stored string: "<<value<<endl;
        cout<<"Stored length: "<<value.length()<<endl;
    }
};

//STANDARD TEMPLATE LIBRARY
//1.VECTOR
//2.SIZE
//3.POP_BACK()
//4.FRONT() AND BACK()
//5.AT()
//6.INSERT()
//7.ERASE()
//8.CLEAR()
//9.EMPTY()
//10.<SET>

 int main(){


    //SET : insert(),erase(),find()
    //exmaple1:
    set<int>  nums={40,10,30,20,40};
    nums.insert(50);
    nums.insert(20);
    nums.erase(40);
    for (int v: nums){
        cout<<v<<" ";
    }
    cout<<""<<endl;
    if(nums.find(100)!= nums.end()){
        cout<<"100 exists."<<endl;
    }
    else{
//         cout<<"100 doesnt exists."<<endl;
//     }
    
//example2:
    set<int> nos={10,20,30,40,40,50};
    nos.insert(25);
    nos.erase(10);
    for (int i: nos){
        cout<<i<<" ";
    }
    cout<<""<<endl;

    if (nos.find(30)!= nos.end()){
        cout<<"30 exists."<<endl;
    }
    else{
        cout<<"30 doesnt exists."<<endl;
    }

// //maps
// //1.
    map<int, string> students;
    students[101]="Maumita";
    students[102]="Rahul";
    students[103]="Ankit";
    students[104]="Avantika";
    students[105]="Anushka";
    cout<<students[103]<<endl;
    cout<<students[104]<<endl;
    cout<<students[101]<<endl;

    for(auto d: students){
        cout<<d.first<<" "<<d.second<<endl;
    }

    if(students.find(105)!=students.end()){
        cout<<"Student found"<<endl;
    }
    else{
        cout<<"Student not found"<<endl;
    }
// STL iterators
// begin(),end()
    vector<int> numberss={12,24,36,48};
    for(auto it= numberss.begin(); it!=numberss.end(); it++){
        if (*it>20){
            cout<<*it<<" ";
        }
        
    }

//sort()
    vector <int> marks={35,90,15,70,50};
    sort(marks.begin(), marks.end());
    for(auto it = marks.begin(); it != marks.end(); it++){
    if(*it>40){
        cout<<*it<<" ";
    }
}
    
    return 0;
}