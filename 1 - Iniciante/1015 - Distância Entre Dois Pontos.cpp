#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
   
    cout << fixed << setprecision(4) << distance << endl;
 
    return 0;
}