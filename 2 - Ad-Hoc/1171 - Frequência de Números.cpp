#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int* v = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v + n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == v[i + 1]) {
            count++;
        } else {
            cout << v[i] << " aparece " << count + 1 << " vez(es)" << endl;
            count = 0;
        }
    }
}