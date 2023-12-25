#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int p1, p2;
    double np1, vp1, np2, vp2;

    cin >> p1 >> np1 >> vp1 >> p2 >> np2 >> vp2;

    double total = (np1 * vp1) + (np2 * vp2);
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    
    return 0;
}