#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  
        
        int rounds = 0;   
        int total_time = 0 ;
        
  
        while (N > 1) {
            rounds++;
            N /= 2;
        }

     
        total_time = rounds * A + (rounds - 1) * B;
        
       
        printf("%d\n", total_time);
    }
    
    return 0;
}
