#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    double a, b, c;
    cin >> a >> b >> c;
        
    double delta = (b * b) - (4 * a * c);
    
    if (a == 0 || delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double delta_root = sqrt(delta);
    
    double r1 = (-b + delta_root) / (2 * a);
    double r2 = (-b - delta_root) / (2 * a);
    
    cout << fixed << setprecision(5);
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
 
    return 0;
}