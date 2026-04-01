#include <iostream>
using namespace std;

void generateMultiplesTable(int number) {
    int multiple = number;
    
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            cout << multiple << " "; 
            multiple += number; 
        }
        cout << endl; 
    }
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
        generateMultiplesTable(number);
    
    return 0;
}
