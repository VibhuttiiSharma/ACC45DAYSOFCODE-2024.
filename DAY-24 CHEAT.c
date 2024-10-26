#include <stdio.h>

int countTuesdays(int N) {
    if (N < 2) {
        return 0;  
    }
    return 1 + (N - 2) / 7;  
}

int main() {
    int T, N;
    scanf("%d", &T);  
    while (T--) {
        scanf("%d", &N); 
        printf("%d\n", countTuesdays(N)); 
    }
    return 0;
}
