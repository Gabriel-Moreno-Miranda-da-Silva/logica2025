#include <stdio.h>
 
int main() {
 
    int codigoP1, numeroP1, codigoP2, numeroP2;
    double valorP1, valorP2, preco;
    scanf("%d %d %lf\n",&codigoP1, &numeroP1, &valorP1);
    scanf("%d %d %lf\n",&codigoP2, &numeroP2, &valorP2);
    preco = (numeroP1*valorP1)+(numeroP2*valorP2);
    printf("VALOR A PAGAR: R$ %#.2lf\n", preco);
 
    return 0;
}
