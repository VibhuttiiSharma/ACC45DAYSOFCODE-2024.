#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);

        // Calculate Chef's score
        int correct_score = X * 3;
        int incorrect_score = (N - X) * -1;
        int total_score = correct_score + incorrect_score;

        // Check if Chef passes or fails
        if (total_score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}