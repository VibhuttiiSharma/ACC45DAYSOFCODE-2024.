#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);
    
    while (T--) {
        int X, A, B;
        scanf("%d %d %d", &X, &A, &B);
        
       
        int totalScore = A * 1 + B * 2;
        
        
        if (totalScore >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }
    
    return 0;
}