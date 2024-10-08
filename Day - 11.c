#include <stdio.h>
#include <stdlib.h> // for abs function

int main() {
    int T;  
    scanf("%d", &T);  
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        int distance = abs(X - Y); // absolute difference between their positions
        printf("%d\n", distance);
    }
    
    return 0;
}