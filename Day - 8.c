
#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Reading the number of test cases

    while (T--) {
        int P, Q, R, S;  // Profits of companies A, B, C, and D
        scanf("%d %d %d %d", &P, &Q, &R, &S);  // Reading profits

        // Check for monopoly condition: one profit is strictly greater than the sum of the other three
        if (P > (Q + R + S) || Q > (P + R + S) || R > (P + Q + S) || S > (P + Q + R)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
