#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>

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
        cout<<"100 doesnt exists."<<endl;
    }
    
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
    cout<<""<<endl;

    vector<int> number1={5,15,25,35};
    auto it = find(number1.begin(),number1.end(),20);
    if(it!= number1.end()){
        cout<<"found: "<< *it<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }

//count()
   vector<int> mar={50,70,50,90,50,70};
   int result= count(mar.begin(),mar.end(),70);
   cout<<result<<endl;     

//min_element(),max_element()
    vector<int> mark={45,80,25,95,60};
    cout<< *max_element(mark.begin(),mark.end())<<endl;
    cout<< *min_element(mark.begin(),mark.end())<<endl;

    vector<int> values={5,15,25,35};
    int total= accumulate(values.begin(),values.end(),10);
    cout<<total<<endl;

//all_of(), any_of(),none_of()
    vector<int> num={10,20,30,40};
    cout<<all_of(num.begin(),num.end(), [](int x) {return x>0;})<<endl;

    cout<<any_of(num.begin(),num.end(), [](int x){return x>30;})<<endl;

    cout<<none_of(num.begin(),num.end(), [](int x) {return x>50;})<<endl;

//lambdas
    auto isEven=[](int x){
        return x%2==0;
    };
    cout<<isEven(12)<<endl; //1
    cout<<isEven(07)<<endl; //0
    cout<<isEven(20)<<endl; //1

    auto isPositive=[](int y){
        return y>0;
    };
    cout<<isPositive(1)<<endl;
    cout<<isPositive(-3)<<endl;
    cout<<isPositive(5)<<endl;

    auto isGreaterthan10=[](int z){
        return z>10;
    };
    cout<<isGreaterthan10(3)<<endl;
    cout<<isGreaterthan10(18)<<endl;
    cout<<isGreaterthan10(8)<<endl;

//count_if()
//1.
    vector<int> n={3,10,15,20,25,30};
    int results=count_if(n.begin(), n.end(),[](int r){
        return r%2==0;
    }
    );
    cout<<results<<endl;
//2.
    vector<int> nu={12,25,8,40,17,30};
    auto isGreaterthan20=[](int d){
        return d>20;
    };
    int res=count_if(nu.begin(),nu.end(),isGreaterthan20);
    cout<<res<<endl;

//3. for_each()
//eg1
    vector<int> ne={3,5,7};
    for_each(ne.begin(),ne.end(),[](int a){
        cout<<a+10<<" ";
    });
    cout<<""<<endl;
//eg2
    vector<int> nee={2,4,6};
    for_each(nee.begin(),nee.end(),[](int f){
        f=f*2;
    });
    for(int f: nee){
        cout<< f <<" ";
    }

//4. transform()
    vector <int> list={2,4,6};
    vector <int> doubled(list.size());
    transform(list.begin(), list.end(), doubled.begin(), [](int x){
        return x*2;
    }
    );
    for(int x: doubled){
        cout<< x <<" ";
    }

//capture by reference in lambdas
    int bonus= 5;
    auto addbonus = [&bonus](int y){
        bonus++;
        return y+ bonus;
    };
    cout<< addbonus(10)<<" ";
    cout<< addbonus(10)<<" ";
    cout<< bonus;

//using mutable
    int bonuses=3;
    vector<int> nums={2,4,6};
    vector<int> output(nums.size());

    transform(nums.begin(),nums.end(),output.begin(),[bonuses](int n){
        return n*2 + bonuses;
    }
    );
    cout<< output[0]<< " "<< output[1]<< " "<< output[2]<< " "<<bonuses;

    return 0;
}