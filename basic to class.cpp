#include <iostream>
using namespace std;

class BTClass {
    int m;
public:
    BTClass(int x) {
        m = x;
    }

    void show() {
        cout << m << endl;
    }
};

int main() {
    int x = 90;
    BTClass d = x;
    d.show();
    return 0;
}
