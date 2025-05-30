#include <stdio.h>
#include <string.h>
 
int main() {
 
    double M[12][12];
    int L, i, j;
    double R;
    R = 0;
    char T[2];
    
    scanf("%d\n", &L);
    scanf("%s\n", T);
    
    for (j=0;j<=11;j++){
        for (i=0;i<=11;i++){
            scanf("%lf\n", &M[i][j]);
        }
    }
    if(strcmp(T,"S")==0){
        for(j=0;j<=11;j++){
            R += M[L][j];
        }
    }
    if(strcmp(T,"M")==0){
        for(j=0;j<=11;j++){
            R += M[L][j];
        }
        R = R/12;
    }
    printf("%.1lf\n", R);
 
    return 0;
}
