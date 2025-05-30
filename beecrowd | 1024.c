#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    int x = 0 ;
    char s[1001];
    
    for (scanf("%d\n", &n);x<n;x++){
        fgets(s, 1001, stdin);
        int len = strlen(s);
        if (s[len - 1] == '\n'){
            s[--len] = '\0';
        }
        for (int i = 0; i < len; i++){
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                s[i] += 3;
            }
        }
        for (int i = 0; i < len / 2; i++) {
            char tmp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = tmp;
        }
        for (int i = len / 2; i < len; i++) {
            s[i]--;
        }
        printf("%s\n", s);
    }
 
    return 0;
}
