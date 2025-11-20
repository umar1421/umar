#include <iostream>
using namespace std;

int main() {
    int N, temp, hot = 0, pleasant = 0, cold = 0;

    cout << "Enter number of days: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << "Day " << i << " temperature: ";
        cin >> temp;

        cout << "Day " << i << " - " << temp << "°F → ";
        if (temp >= 85) hot++, cout << "Hot\n";
        else if (temp >= 60) pleasant++, cout << "Pleasant\n";
        else cold++, cout << "Cold\n";
    }

    cout << "\nHot: " << hot << "\nPleasant: " << pleasant << "\nCold: " << cold << endl;
    return 0;
}
