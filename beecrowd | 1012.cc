#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "TRIANGULO: " << fixed << setprecision(3) << a * c / 2 << '\n';
    cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159 * pow(c,2) << '\n';
    cout << "TRAPEZIO: " << fixed << setprecision(3) << (a + b) * c/2 << '\n';
    cout << "QUADRADO: " << fixed << setprecision(3) << b * b << '\n';
    cout << "RETANGULO: " << fixed << setprecision(3) << a * b << '\n';
 
    return 0;
}
