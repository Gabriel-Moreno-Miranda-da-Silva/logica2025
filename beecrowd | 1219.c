#include <stdio.h>
#include <math.h>
 
int main() {
    
    double a, b, c, semiperimetroT;
    double triangulo, R, circuloMaior, r, circuloMenor;
    
    int calculoArea (double a, double b, double c) {
        semiperimetroT = (a + b + c) / 2.0;
        triangulo = sqrt(semiperimetroT * (semiperimetroT - a) * (semiperimetroT - b) * (semiperimetroT - c));
        R = (a * b * c) / (4.0 * triangulo);
        circuloMaior = (3.1415926535897 * R * R)-triangulo;  
        r = triangulo / semiperimetroT;
        circuloMenor = 3.1415926535897 * r * r;
        triangulo = triangulo - circuloMenor ;
    }
    
    while (scanf("%lf %lf %lf\n", &a, &b, &c) != EOF){
        calculoArea (a, b, c);
        printf("%.4lf %.4lf %.4lf\n", circuloMaior, triangulo, circuloMenor);
    }
    return 0;
}
