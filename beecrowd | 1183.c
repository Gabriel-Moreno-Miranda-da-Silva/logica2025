#include <stdio.h>
#include <string.h>
 
int main() {
 
    double M[12][12];
    int i, j;
    double R;
    R = 0;
    char O[2];
    
    scanf("%s\n", O);
    
    for (j=0;j<=11;j++){
        for (i=0;i<=11;i++){
            scanf("%lf\n", &M[i][j]);
        }
    }
    if(strcmp(O,"S")==0){
        for(j=0;j<=10;j++){
            for(i=j+1;i<=11;i++){
                R += M[i][j];
            }
        }
    }
    if(strcmp(O,"M")==0){
        for(j=0;j<=10;j++){
            for(i=j+1;i<=11;i++) {
                R += M[i][j];
            }
        }
        R = R/66;
    }
    printf("%.1lf\n", R);
 
    return 0;
}
