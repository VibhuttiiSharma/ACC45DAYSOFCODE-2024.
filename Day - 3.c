#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  // Read X and Y for each test case

        // Calculate total hours
        int total_hours = (X * 4) + Y;
        
        // Output the result for each test case
        printf("%d\n", total_hours);
    }
    
    return 0;
}
