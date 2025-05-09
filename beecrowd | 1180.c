#include <stdio.h>

int main () {
    
    int N, i, p, m;
    scanf("%d\n",&N);
    int x[N];
    scanf("%d", &x[i]);
    m = x[i];
    p = i;
    for (i=1;i<N;i++){
        scanf("%d", &x[i]);
        if(x[i]<m){
            m = x[i];
            p = i;
        }
        
    }
    printf("Menor valor: %d\nPosicao: %d\n", m, p);
    return 0;
}
