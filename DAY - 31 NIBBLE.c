#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    while (T--) {
        int N;
        scanf("%d", &N);  
        
      
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    
    return 0;
}