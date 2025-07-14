#include <stdio.h>

int main() {
    int N, M;
    int basket[101];
    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++) {
        basket[i] = i;
    }

    for (int m = 0; m < M; m++) {
        int i, j;
        scanf("%d %d", &i, &j);

        while (i < j) {
            int temp = basket[i];
            basket[i] = basket[j];
            basket[j] = temp;
            i++;
            j--;
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}
