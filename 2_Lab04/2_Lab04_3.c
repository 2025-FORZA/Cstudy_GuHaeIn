#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int ghlwjs;
    if (M <= N) {
        ghlwjs = 2 * (M - 1);
    }
    else {
        ghlwjs = 2 * (N - 1) + 1;
    }

    printf("%d\n", ghlwjs);
    return 0;
}