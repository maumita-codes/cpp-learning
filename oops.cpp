// Learning oops

#include <iostream>
using namespace std;
// class Car {
// public:
//     string brand;
//     int price;

//     Car(string b, int p) {
//         brand = b;
//         price = p;
//     }

//     void display() {
//         cout << brand << endl;
//         cout << price << endl;
//     }
// };
class Books{
public:
    string title;
    int price;

    Books(string i, int m){
        title=i;
        price=m;
    }
    void display(){
        cout<<title<<endl;
        cout<<price<<endl;
    }
    void discount(){
        price= price-100;
        cout<<price<<endl;
    }
};
int main(){

    // Car car1("Audi", 16000000);
    // Car car2("BMW", 15000000);
    // car1.display();
    // car2.display();

    Books book1("Harry Potter", 500);
    Books book2("Atomic Habits", 600);
    book1.display();
    book2.display();
    book1.discount();
    book2.discount();

    return 0;
}
