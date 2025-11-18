#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int maxLen = 0;
    int bestStart = 0;
    int bestSeq[1000];

    for (int first = N; first >= 0; first--) {
        int seq[1000];
        int len = 0;
        seq[len++] = N;
        seq[len++] = first;

        while (1) {
            int next = seq[len - 2] - seq[len - 1];
            if (next < 0) break;
            seq[len++] = next;
        }

        if (len > maxLen) {
            maxLen = len;
            for (int i = 0; i < len; i++)
                bestSeq[i] = seq[i];
        }
    }

    printf("%d\n", maxLen);

    for (int i = 0; i < maxLen; i++)
        printf("%d ", bestSeq[i]);
    printf("\n");

    return 0;

}