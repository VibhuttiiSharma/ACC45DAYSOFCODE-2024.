#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        
        // Calculate the total price by summing the two highest prices
        int totalCost = A + B + C - (A < B ? (A < C ? A : C) : (B < C ? B : C));
        
        printf("%d\n", totalCost);
    }
    
    return 0;
}
