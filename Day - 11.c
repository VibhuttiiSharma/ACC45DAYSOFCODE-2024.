#include <stdio.h>
#include <stdlib.h> 

int main() {
    int T;  
    scanf("%d", &T);  
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        int distance = abs(X - Y); 
        printf("%d\n", distance);
    }
    
    return 0;
}
