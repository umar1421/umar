#include <iostream>
using namespace std;

class S {
    int m;
public:
    S(int x=0) : m(x) {}

    bool operator>(S s) {
        return m > s.m;
    }
};

int main() {
    S a(80), b(70);
    if(a > b)
        cout << "A big\n";
    else
        cout << "B big\n";
    return 0;
}
