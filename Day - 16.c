#include <stdio.h>

int main() {
    int T, N;

  
    scanf("%d", &T);


    for(int i = 0; i < T; i++) {
 
        scanf("%d", &N);

     
        int notebooks = N * 10;

        printf("%d\n", notebooks);
    }

    return 0;
}

