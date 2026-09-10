//using scope concepts in functions

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if (a > 5) {
        int b = 20;
        if (b > 10) {
            int c = 30;

            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        cout << a << endl;
        cout << b << endl;
    }
    cout << a << endl;
    return 0;
}