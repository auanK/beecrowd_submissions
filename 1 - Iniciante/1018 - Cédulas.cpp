#include <iostream>

using namespace std;

int main() {
    int value;
    cin >> value;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int counts[7] = {0};

    cout << value << endl;

    for (int i = 0; i < 7; i++) {
        counts[i] = value / notes[i];
        value %= notes[i];
        cout << counts[i] << " nota(s) de R$ " << notes[i] << ",00" << endl;
    }

    return 0;
}
