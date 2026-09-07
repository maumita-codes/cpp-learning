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
int main(){
    Car car1("Audi", 16000000);
    Car car2("BMW", 15000000);
    car1.display();
    car2.display();

    return 0;
}
