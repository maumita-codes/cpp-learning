#include <iostream>
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
    return 0;
}