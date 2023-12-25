#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double area_triangle = (A * C) / 2;
    double area_circle = (3.14159) * (C * C);
    double area_trapezium = (C * (A + B)) / 2;
    double area_square = B * B;
    double area_rectangle = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << area_triangle << endl;
    cout << "CIRCULO: " << area_circle << endl;
    cout << "TRAPEZIO: " << area_trapezium << endl;
    cout << "QUADRADO: " << area_square << endl;
    cout << "RETANGULO: " << area_rectangle << endl;
    
    return 0;
}