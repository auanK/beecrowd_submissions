#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double value;
    cin >> value;

    int notes[] = {100, 50, 20, 10, 5, 2};
    int coins[] = {100, 50, 25, 10, 5, 1};
    int counts[12] = {0};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; ++i) {
        counts[i] = (int) (value / notes[i]);
        value -= counts[i] * notes[i];
        cout << counts[i] << " nota(s) de R$ " << notes[i] << ".00" << endl;
    }

    value *= 100;
    cout << "MOEDAS:" << endl;
    for (int i = 6; i < 12; ++i) {
        counts[i] = (int) (value / coins[i - 6]);
        value -= counts[i] * coins[i - 6];
        cout << counts[i] << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i - 6] / 100.0 << endl;
    }  

    return 0;
}
