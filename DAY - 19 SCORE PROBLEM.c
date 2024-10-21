#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

   
        if (Y % X == 0 && Y / X <= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
