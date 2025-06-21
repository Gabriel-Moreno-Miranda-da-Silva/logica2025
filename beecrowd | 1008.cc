#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "NUMBER = " << a << '\n';
    cout << "SALARY = U$ " << fixed << setprecision(2) << b * c << '\n';
 
    return 0;
}
