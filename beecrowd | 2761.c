#include <stdio.h>
#include <string.h>

 
int main() {
    int A;
    float B;
    char C;
    char D[51];
    
    scanf ("%d %f %c ", &A, &B, &C);
    fgets (D,51,stdin);
    {
        int i = strcspn(D,"\n");
        D[i] = '\0';
    }
    printf ("%d%f%c%s\n", A, B, C, D);
    printf ("%d\t%f\t%c\t%s\n", A, B, C, D);
    printf ("%10d%10f%10c%10s\n", A, B, C, D);
 
    return 0;
}
