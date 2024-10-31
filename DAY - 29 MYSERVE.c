#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int P, Q;
        scanf("%d %d", &P, &Q);
        
        int totalPoints = P + Q; 
        int block = totalPoints / 2; 
        
        if (block % 2 == 0) {
            printf("Alice\n"); 
        } else {
            printf("Bob\n");
        }
    }
    
    return 0;
}