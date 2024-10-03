#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int score_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int score_B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));

       
        int max_score = (score_A_first > score_B_first) ? score_A_first : score_B_first;
        
        printf("%d\n", max_score);
    }

    return 0;
}


