#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num;
    int min = 1000001;
    int max = -1000001;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num < min) min = num;
        if (num > max) max = num;
    }

    printf("%d %d\n", min, max);

    return 0;
}
