#include <iostream>
using namespace std;

class Cp {
    int r, i;
public:
    Cp(int a=0, int b=0) : r(a), i(b) {}

    Cp operator+(Cp c) {
        return Cp(r + c.r, i + c.i);
    }

    void show() {
        cout << r << "+" << i << "i" << endl;
    }
};

int main() {
    Cp a(2,3), b(1,2), c;
    c = a + b;
    c.show();
    return 0;
}
