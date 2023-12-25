#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int x;
    double y;

    cin >> x >> y;

    double consumption = x / y;
    
    cout << fixed << setprecision(3) << consumption << " km/l" << endl;
    return 0;
}