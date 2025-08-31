#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int cards[101][101];
    int score[101] = { 0 };

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &cards[i][j]);
        }
        qsort(cards[i], M, sizeof(int), cmp);
    }

    for (int round = 0; round < M; round++) {
        int maxCard = 0;
        for (int i = 0; i < N; i++) {
            if (cards[i][round] > maxCard) {
                maxCard = cards[i][round];
            }
        }

        for (int i = 0; i < N; i++) {
            if (cards[i][round] == maxCard) {
                score[i]++;
            }
        }
    }

    int maxScore = 0;
    for (int i = 0; i < N; i++) {
        if (score[i] > maxScore) {
            maxScore = score[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (score[i] == maxScore) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    return 0;
}