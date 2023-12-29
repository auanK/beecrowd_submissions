#include <iostream>

using namespace std;

int main() {
    int coins[] = {50, 10, 5, 1};
    int value, i = 1;

    while (true) {
        cin >> value;

        if (value == 0) {
            break;
        }

        int count[4] = {0};

        for (int j = 0; j < 4; j++) {
            count[j] = value / coins[j];
            value %= coins[j];
        }

        cout << "Teste " << i << endl;
        for (int j = 0; j < 3; j++) {
            cout << count[j] << " ";
        }
        cout << count[3] << endl << endl;

        i++;
    }

    return 0;
}
