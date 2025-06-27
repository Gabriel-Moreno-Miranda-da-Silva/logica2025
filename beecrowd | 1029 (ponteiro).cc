#include <iostream>
#include <iomanip>
using namespace std;
 
int fib(int x, int *calls){
    *calls = *calls + 1;
    if (x == 0){
        return 0;
    }
    if (x == 1){
        return 1;
    }
    if (x != 0 && x != 1){
        return fib(x-1, calls) + fib(x-2, calls);
    }
        return 0;
} 

int main() {
    int x, calls, T, R;
    for(cin >> T; T > 0; T--){
        calls = -1;
        cin >> x;
        R = fib (x, &calls);
        cout << "fib(" << x << ") = " << calls << " calls = " << R << '\n';
    }
 
    return 0;
}
