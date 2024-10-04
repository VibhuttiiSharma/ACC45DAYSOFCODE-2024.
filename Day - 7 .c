
#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X; // Time when Janmansh starts the assignments (1 PM to 9 PM)
        scanf("%d", &X);

        // Convert X (1 PM to 9 PM) into 24-hour format by adding 12
        int start_time = X + 12;

        // Check if Janmansh can finish all assignments before or by 10 PM (22:00)
        if (start_time + 3 <= 22) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

