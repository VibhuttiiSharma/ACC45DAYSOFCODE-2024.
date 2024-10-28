#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);  

        int count = 0;

        
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);  

            
            if ((characteristic + K) % 7 == 0) {
                count++;
            }
        }

        
        printf("%d\n", count);
    }

    return 0;
}