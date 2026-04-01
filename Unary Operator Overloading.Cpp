#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    Point operator-() {
        Point temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")\n";
    }
};

int main() {
    Point p1(3, -4);
    Point p2;

    cout << "Original:\n";
    p1.display();

    p2 = -p1;
    cout << "After unary - :\n";
    p2.display();

    return 0;
}
