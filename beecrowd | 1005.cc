#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    float a, b;
    cin >> a;
    cin >> b;
    cout << "MEDIA = " << fixed << setprecision(5) << (a * 3.5 + b * 7.5) / 11 << '\n';
 
    return 0;
}
