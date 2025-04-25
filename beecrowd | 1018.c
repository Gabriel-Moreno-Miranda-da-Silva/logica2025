#include <stdio.h>
 
int main() {
 
    int valor, n100, n50, n20, n10, n5, n2, n1;
    valor = 0;
    n100 = 0;
    n50 = 0;
    n20 = 0;
    n10 = 0;
    n5 = 0;
    n2 = 0;
    n1 = 0;
    scanf("%d\n",&valor);
    printf("%d\n",valor);
    while (valor>=100) {
        valor = valor - 100;
        n100 = n100 + 1;
    };
    while (valor>=50) {
        valor = valor - 50;
        n50 = n50 + 1;
    };
    while (valor>=20) {
        valor = valor - 20;
        n20 = n20 + 1;
    };
    while (valor>=10) {
        valor = valor - 10;
        n10 = n10 + 1;
    };
    while (valor>=5) {
        valor = valor - 5;
        n5 = n5 + 1;
    };
    while (valor>=2) {
        valor = valor - 2;
        n2 = n2 + 1;
    };
    while (valor>=1) {
        valor = valor - 1;
        n1 = n1 + 1;
    };
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);
 
    return 0;
}
