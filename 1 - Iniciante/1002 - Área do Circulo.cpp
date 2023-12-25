#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double r;
    cin >> r;
    
    double a = 3.14159 * (r * r);
    cout << "A=" << fixed << setprecision(4) << a << endl;
 
    return 0;
}