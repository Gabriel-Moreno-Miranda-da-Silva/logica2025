#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "MEDIA = " << fixed << setprecision(1) << (a * 2 + b * 3 + c * 5) / 10 << '\n';
 
    return 0;
}
