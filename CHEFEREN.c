#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, A, B; // Number of episodes, even-indexed duration, odd-indexed duration
        scanf("%d %d %d", &N, &A, &B);

        int totalDuration = 0;
        
        // Calculate the total duration
        if (N % 2 == 0) {
            // If N is even, there are equal odd and even episodes
            totalDuration = (N / 2) * (A + B);
        } else {
            // If N is odd, there is one more odd episode
            totalDuration = (N / 2) * (A + B) + B;
        }

        printf("%d\n", totalDuration); // Print the result
    }

    return 0;
}