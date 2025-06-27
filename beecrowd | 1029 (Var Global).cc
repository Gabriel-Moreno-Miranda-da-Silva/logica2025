#include <iostream>
#include <iomanip>
using namespace std;

int calls;
 
int fib(int x){
    calls++;
    if (x == 0){
        return 0;
    }
    if (x == 1){
        return 1;
    }
    if (x != 0 && x != 1){
        return fib(x-1) + fib(x-2);
    }
        return 0;
} 

int main() {
    int x, T, R;
    for(cin >> T; T > 0; T--){
        calls = -1;
        cin >> x;
        R = fib (x);
        cout << "fib(" << x << ") = " << calls << " calls = " << R << '\n';
    }
 
    return 0;
}
