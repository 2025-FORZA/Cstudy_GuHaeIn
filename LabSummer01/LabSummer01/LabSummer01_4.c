#include <stdio.h>
#include <string.h>

int main() {
    int K;
    char str[201];
    scanf("%d", &K);
    scanf("%s", str);

    int len = strlen(str);
    int row = len / K;

    char table[200][20];

    int idx = 0;

    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < K; j++) {
                table[i][j] = str[idx++];
            }
        }
        else {
            for (int j = K - 1; j >= 0; j--) {
                table[i][j] = str[idx++];
            }
        }
    }

    for (int j = 0; j < K; j++) {
        for (int i = 0; i < row; i++) {
            printf("%c", table[i][j]);
        }
    }
    printf("\n");

    return 0;
}
