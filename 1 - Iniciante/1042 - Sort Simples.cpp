#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }

    if (a > c) {
        int aux = a;
        a = c;
        c = aux;
    }

    if (b > c) {
        int aux = b;
        b = c;
        c = aux;
    }

    cout << a << endl << b << endl << c << endl;
    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl;

    return 0;
}