#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    string name;
    float fixed_salary, sales;
    
    cin >> name >> fixed_salary >> sales;
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << fixed_salary + (0.15 * sales) << endl;
 
    return 0;
}