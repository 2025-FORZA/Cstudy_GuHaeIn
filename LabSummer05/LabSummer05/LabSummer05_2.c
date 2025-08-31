#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int K[M];
    for (int i = 0; i < M; i++) scanf("%d", &K[i]);

    int sum = 0;
    for (int x = 1; x <= N; x++) {
        bool ok = false;
        for (int i = 0; i < M; i++) {
            if (x % K[i] == 0) {
                ok = true;
                break;
            }
        }
        if (ok) sum += x;
    }
    printf("%d\n", sum);
    return 0;
}