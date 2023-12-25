#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double radius;
    cin >> radius;
    
    double volume = (4.0/3.0) * 3.14159 * (radius * radius * radius);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
 
    return 0;
}