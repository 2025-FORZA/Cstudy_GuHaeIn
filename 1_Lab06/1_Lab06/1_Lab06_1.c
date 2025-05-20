#include <stdio.h>

int main() {
    int n, sum = 0;
    char c;
    scanf("%d", &n);
    while ((c = getchar()) != '\n');

    for (int i = 0; i < n; i++) {
        c = getchar();
        sum += c - '0';
    }

    printf("%d\n", sum);
    return 0;
}
