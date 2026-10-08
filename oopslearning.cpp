#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <map>

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
    Employee* ptr= new Developer("Maumita");
    ptr->work();
    delete ptr;
  
    Box b1(10);
    Box b2(20);
    b2=b1;
    cout << *b1.value << endl;
    cout << *b2.value <<endl;
    Box b3=std::move(b1);
    cout<<*b3.value<<endl;
    Box b4(50);
    cout<< *b4.value <<endl;
    b4= std::move(b3);
    cout<< *b4.value <<endl;

    cout<< multiply(10,20) <<endl;
    cout<< multiply(2.5,6.7)<<endl;

    cout<<add(10,4.5)<<endl;
    cout << add(5, 2.75) << endl;

    Storage<int>s1(25);
    Storage<string>s2("Hello");
    s1.show();
    s2.show();

    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    for(int x: numbers){
        cout<< x << " "<<endl;
    }
 
    cout<<"Size of the arr: "<<numbers.size()<<endl;
    numbers.pop_back();
    cout<<numbers.size()<<endl;
    cout<<numbers.front()<<endl;
    cout<<numbers.back()<<endl;

    //[]:direct access
    //.at():checked access

    cout << numbers.at(0) << endl;
    cout << numbers.at(1) << endl;
    cout << numbers.at(2) << endl;

    numbers.insert(numbers.begin() + 2, 50);
    numbers.erase(numbers.begin()+2);

    vector<int> num = {10, 20, 30, 40, 50};
    num.clear();
    cout<<num.size()<<endl;
    cout<<num.empty()<<endl;
    if(num.empty()){
        cout<<"Vector is empty."<<endl;
    }

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
        cout<<"100 doesnt exists."<<endl;
    }
    
//     //example2:
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

    map<int, string> students;
    students[101]="Maumita";
    students[102]="Rahul";
    students[103]="Ankit";
    students[104]="Avantika";
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
    return 0;
}