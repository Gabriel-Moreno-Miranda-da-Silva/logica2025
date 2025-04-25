#include <stdio.h>
 
int main() {
 
    int N, x;
    x = 1;
    scanf("%d\n",&N);
    while (N>0){
        x = N * x;
        N = N -1;
    };
    printf("%d\n", x);
 
    return 0;
}
