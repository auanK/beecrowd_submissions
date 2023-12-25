#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string message;
        getline(cin, message);

        int size = message.size();
        
        for (int i = 0; i < size; i++) {
            if (isalpha(message[i])) {
                message[i] += 3;
            }
        }

        for (int i = 0; i < size / 2; i++) {
                char aux = message[i];
                message[i] = message[size - i - 1];
                message[size - i - 1] = aux;
        }

        for (int i = size / 2; i < size; i++) {
            message[i]--;
        }

        cout << message << endl;
    }

    return 0;
}