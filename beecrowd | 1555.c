#include <stdio.h>

int Rafael, Beto, Carlos, N, x, y;
char *vencedor;

int calcularfuncoes (int x,int y){
    Rafael = (3*x)*(3*x) + (y*y) ;
    Beto = 2*(x*x) + (5*y)*(5*y) ;
    Carlos = -100*x + y*y*y ;
}
int main() {
    
    
    for(scanf("%d\n",&N);N>0;N--) {
        scanf("%d %d\n", &x, &y);
        calcularfuncoes (x,y);
        if (Rafael>Beto & Rafael>Carlos){
            vencedor = "Rafael";
        }
        if (Beto>Rafael & Beto>Carlos){
            vencedor = "Beto";
        }
        if (Carlos>Rafael & Carlos>Beto){
            vencedor = "Carlos";
        }
        printf("%s ganhou\n", vencedor);
    }
    
    return 0;
}
