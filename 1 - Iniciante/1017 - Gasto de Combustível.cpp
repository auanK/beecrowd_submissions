#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hour;
    double average_speed;

    cin >> hour >> average_speed;

    double liters = (hour * average_speed) / 12;

    cout << fixed << setprecision(3) << liters << endl;

    return 0;
}