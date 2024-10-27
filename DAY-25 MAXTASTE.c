#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

     
        int option1 = a + c;
        int option2 = a + d;
        int option3 = b + c;
        int option4 = b + d;

    
        int max_tastiness = option1;
        if (option2 > max_tastiness) max_tastiness = option2;
        if (option3 > max_tastiness) max_tastiness = option3;
        if (option4 > max_tastiness) max_tastiness = option4;

      
        printf("%d\n", max_tastiness);
    }

    return 0;
}