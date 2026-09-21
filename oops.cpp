// Learning oops

#include <iostream>
using namespace std;
class Car {
public:
    string brand;
    int price;

    Car(string b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << brand << endl;
        cout << price << endl;
    }
};
class Books{
private:
    int price;


public:
    string title;
    int getPrice(){
        return price;
    }
    Books(string title, int price) {
        this->title=title;
        this->price=price;
    }
    Books() : title("Unknown"), price(0) {
    }
    void display(){
        cout<<title<<endl;
        cout<<price<<endl;
    }
    void discount(){
        price= price-100;
        cout<<price<<endl;
    }
    void setPrice(int p){
        price=p;
    }
};
class parent{
protected:
    int x;
};
class child: public parent{
public:
    void setX(){
        x=10;
    }
    void showX(){
        cout<<x<<endl;
    }
};
class animal{
public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class dog: virtual public animal{
public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class cat: virtual public animal{
public:
    void meow(){
        cout<<"Meowing"<<endl;
    }
};
class pet: public dog ,public cat{
public:
    void play(){
        cout<<"Playing"<<endl;
    }
};
class person{
protected:
    string name;
public:
    void setName(string n){
        name=n;
    }
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }
};
class student: public person{
public:
    void showName(){
        cout<<name<<endl;
    }
    void study(){
        cout<<"Studying"<<endl;
    }
};
class academics{
public:
    void study(){
        cout<<"Studying"<<endl;
    }
};
class sports{
public: 
    void play(){
        cout<<"Playing sports"<<endl;
    }
};
class student2: public academics, public sports{
public: 
    void attendclass(){
        cout<<"attending classes"<<endl;
    }
};
class AnimaL{
public:
    virtual void sound(){
        cout<<"Animal makes a sound"<<endl;
    }
};
class DOG: public AnimaL{
public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};
int main(){

    Car car1("Audi", 16000000);
    Car car2("BMW", 15000000);
    car1.display();
    car2.display();

    Books book1("Harry Potter", 500);
    Books book2("Atomic Habits", 600);
    Books book3;
    book1.setPrice(700);
    cout << book1.getPrice() << endl;
    book1.display();
    book2.display();
    book3.display();
    book1.discount();
    book2.discount();

    child c;
    c.setX();
    c.showX();

    dog d;
    d.eat();
    d.bark();

    cat cat1;
    cat1.eat();
    cat1.meow();


    student s;
    s.setName("Maumita");
    s.introduce();
    s.showName();
    s.study();

    student2 s2;
    s2.study();
    s2.play();
    s2.attendclass();
    
    pet p;
    p.eat();
    p.bark();
    p.meow();
    p.play();

    AnimaL* ptr = new DOG();
    ptr->sound();
    
    return 0;
}
