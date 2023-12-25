#include <iostream>

using namespace std;

int main() {
    int n;
    string mes[12] = {"January",   "February", "March",    "April",
                      "May",       "June",     "July",     "August",
                      "September", "October",  "November", "December"};

    cin >> n;

    cout << mes[n - 1] << endl;
}