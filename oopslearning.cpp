#include <iostream>
#include <utility>
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

    return 0;
}