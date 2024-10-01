
#include <stdio.h>

int main() {
    int A, B, C, X;

    // Read the input values
    scanf("%d %d %d %d", &A, &B, &C, &X);

    // Check if the given topic matches any of the prepared topics
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

