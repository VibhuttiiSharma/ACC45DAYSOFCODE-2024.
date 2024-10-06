
#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int X; 
        scanf("%d", &X);

        int start_time = X + 12;

        if (start_time + 3 <= 22) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

