#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int code, n;
    cin >> code >> n;
    
    double values[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    
    double total = values[code - 1] * n;
    
    cout << fixed << setprecision(2) << "Total: R$ " << total << endl;
 
    return 0;
}