#include <stdio.h>

int main () {
    
    unsigned long long int Fib[61], F1, F2, Fn;
    int T, x, i;
    Fib [0] = 0;
    Fib [1] = 1;
    Fib [2] = 1;
    for (F1=1,F2=1,i=3;i<61;i++){
        Fn = F1 + F2;
        Fib[i] = Fn;
        F1 = F2;
        F2 = Fn;
    }
    scanf("%d",&T);
    for (i=0;i<T;i++){
        scanf("%d\n",&x);
        printf("Fib(%d) = %llu\n", x, Fib[x]);
    }
    return 0;
}
