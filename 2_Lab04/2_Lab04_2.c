#include <stdio.h>

int main() {

	int N, M;
    scanf("%d %d", &N, &M);

    int qkrnsl[101] = { 0 };

    for (int m = 0; m < M; m++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int x = i; x <= j; x++) {
            qkrnsl[x] = k;
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", qkrnsl[i]);
    }

	return 0;
}