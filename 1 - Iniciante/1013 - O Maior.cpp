#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maior = ((a + b + abs(a - b)) / 2);

    if (c > maior) {
        maior = c;
    }

    cout << maior << " eh o maior" << endl;
}