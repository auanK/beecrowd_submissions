#include <iostream>

using namespace std;

int main() {
    int password;

    while (cin >> password && password != 2002) {
        cout << "Senha Invalida\n";
    }
    cout << "Acesso Permitido\n";

    return 0;
}