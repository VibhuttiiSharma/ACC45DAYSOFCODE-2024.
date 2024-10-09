#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int N, X;  
        scanf("%d %d", &N, &X);

     
        int face_down_cards = N - X;

      
        int result = (X < face_down_cards) ? X : face_down_cards;
        printf("%d\n", result);
    }

    return 0;
}

