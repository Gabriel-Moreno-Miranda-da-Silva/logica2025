#include <stdio.h>
#include <math.h>
 
int main() {
 
    int N[10], i, x, v;
    scanf("%d", &v);
    for(i=0;i<=9;i++){
        N[i] = v*pow(2,i);
        x = N[i];
        printf("N[%d] = %d\n", i, x);
    }
 
    return 0;
}
