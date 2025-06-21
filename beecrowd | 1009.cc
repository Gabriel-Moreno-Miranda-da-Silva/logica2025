#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main() {
    double a, b;
    string n;
    cin >> n;
    cin >> a;
    cin >> b;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << (a + (b * 0.15)) << '\n';
 
    return 0;
}
