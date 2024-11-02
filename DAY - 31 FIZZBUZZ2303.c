#include <stdio.h>

int main() {
    int T, N;
    
   
    scanf("%d", &T);
    
   
    for (int i = 0; i < T; i++) {
        
        scanf("%d", &N);
        
       
        int result = N * (N - 1);
        
       
        printf("%d\n", result);
    }
    
    return 0;
}
