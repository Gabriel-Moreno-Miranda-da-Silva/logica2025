#include <stdio.h>
#include <string.h>

int Verify(int r){
    for (i=0;i<=9;i++){
        temp = M[i][j];
        for (i=0;i<=9;i++){
            if(temp == M[i][j]]){
                r += 1;
            }
        }
    }
}
 
int main() {
 
    int M[9][9];
    int m[9];
    int i, j, n, R, temp;
    
    scanf("%d\n", &n);
    for(int N = 1; N<=n; N++)
        for (j=0;j<=9;j++){
            for (i=0;i<=9;i++){
                scanf("%d\n", &M[i][j]);
            }
        }
        
        for (j=0;j<=9;j++){
            Verify()
        }
    }
    return 0;
}
