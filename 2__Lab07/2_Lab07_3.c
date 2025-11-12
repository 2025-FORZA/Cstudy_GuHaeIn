#include <stdio.h>
#include <string.h>

char board[50][50];

int min(int a, int b) {

    return a < b ? a : b;
}

int count_repaint(int x, int y) {

    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            char current = board[x + i][y + j];

            if ((i + j) % 2 == 0) {
                if (current != 'W') cnt1++;
                if (current != 'B') cnt2++;
            }
            else {
                if (current != 'B') cnt1++;
                if (current != 'W') cnt2++;
            }
        }
    }

    return min(cnt1, cnt2);
}

int main() {

    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%s", board[i]);
    }

    int result = 64;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {

            int repaint = count_repaint(i, j);
            if (repaint < result)
                result = repaint;
        }
    }

    printf("%d\n", result);

    return 0;
}