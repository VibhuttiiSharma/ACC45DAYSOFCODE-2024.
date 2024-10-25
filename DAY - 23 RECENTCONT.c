#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int N;
        scanf("%d", &N); 

        int start38_count = 0, ltime108_count = 0;
        
     
        for (int i = 0; i < N; i++) {
            char contest_code[10];
            scanf("%s", contest_code);

            if (strcmp(contest_code, "START38") == 0) {
                start38_count++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                ltime108_count++;
            }
        }

       
        printf("%d %d\n", start38_count, ltime108_count);
    }

    return 0;
}