#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        int C = 21 - (A + B);

       
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}