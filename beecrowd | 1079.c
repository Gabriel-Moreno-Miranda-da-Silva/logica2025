#include <stdio.h>
 
int main() {
 
    double n, a, b, c, X;
    scanf("%lf\n",&n);
    while (n>0){
        scanf("%lf %lf %lf",&a,&b,&c);
        X = (a*2+b*3+c*5)/10 ;
        printf("%#.1lf\n",X);
        n = n - 1;
    }
    
    return 0;
}
