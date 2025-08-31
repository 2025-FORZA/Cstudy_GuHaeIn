#include <stdio.h>

int main() {
    int S;
    while (1) {
        scanf("%d", &S);
        if (S == 0) break;

        while (1) {
            printf("%d", S);
            if (S < 10) {
                break;
            }
            printf(" ");

            int next = 1;
            int temp = S;
            while (temp > 0) {
                next *= (temp % 10);
                temp /= 10;
            }
            S = next;
        }
        printf("\n");
    }
    return 0;
}