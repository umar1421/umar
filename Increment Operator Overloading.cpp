#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    Counter operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void show() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial: ";
    c1.show();

    ++c1;  
    cout << "After ++c1: ";
    c1.show();

    c1++; 
    cout << "After c1++: ";
    c1.show();

    return 0;
}
