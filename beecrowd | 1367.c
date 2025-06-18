#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int N;
    
    while(1){
        scanf("%d", &N);
        if (N == 0)
            break;
    
        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }
    
        int totalTime = 0;
        int totalSolved = 0;
        char R[10], Q;
        int temp = 0;
    
        for (int i = 0; i < N; i++) {
           scanf(" %c %d %s", &Q, &temp, &R);
           if (strcmp(R,"incorrect") == 0){
                if (problems[Q-'A'].solved == 0){
                    problems[Q-'A'].penalty += 20;                    
                }     
           }
           else{
               problems[Q-'A'].solved += temp;
               ++totalSolved;
           }
           
        }
        for (int i = 0; i<MAX_PROBLEMS;i++){
            if (problems[i].solved){
                totalTime += problems[i].penalty+problems[i].solved;
            }
            
        }
    
        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
