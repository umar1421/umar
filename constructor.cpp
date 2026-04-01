#include <iostream>
using namespace std;

class abc {
    int a, b;

    public:
    abc() {
        a = 5;
        b = 10;
    }
        
    void get() {
        cout << a << " " << b;
    }  
};

int main ()
{
    abc x;
    x.get();
    return 0;
}
