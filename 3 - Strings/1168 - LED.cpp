#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};    

    while (n--) {
        string value;
        cin >> value;

        int total = 0;
        
        for (int i = 0; i < value.size(); i++) {
            total += leds[value[i] - '0'];
        }

        cout << total << " leds" << endl;
    }
 
    return 0;
}