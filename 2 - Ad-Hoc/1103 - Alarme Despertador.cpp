#include <iostream>

using namespace std;

int main() {
    int h1, m1, h2, m2;

    while (true) {
        cin >> h1 >> m1 >> h2 >> m2;

        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }

        int minutes = ((h2 - h1) * 60) + (m2 - m1);
        cout << (minutes < 0 ? minutes + 1440 : minutes) << endl;
    }

    return 0;
}