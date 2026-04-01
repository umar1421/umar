#include <iostream>
using namespace std;

class L {
    int x;
public:
    L(int a=0) : x(a) {}

    bool operator==(L l) {
        return x == l.x;
    }
};

int main() {
    L a(10), b(0);
    if(a == b)
        cout << "Equal\n";
    else
        cout << "Not equal\n";
    return 0;
}
