#include <iostream>
 
using namespace std;
 
int main() {
    int days;
    cin >> days;
    
    int years, months;
    
    years = days/365;
    days %= 365;
    months = days/30;
    days %= 30;
    
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
    
    return 0;
}