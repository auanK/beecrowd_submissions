#include <iostream>

using namespace std;

int main() {
    int sec;
    cin >> sec;

    int hour, min;

    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    cout << hour << ":" << min << ":" << sec << endl;

    return 0;
}