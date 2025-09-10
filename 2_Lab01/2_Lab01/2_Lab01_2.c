#include <stdio.h>

int main(void) {
    int T, N, M;
    int dp[31][31] = { 0 };

    for (int i = 0; i <= 30; i++) {
        dp[i][0] = 1;
        dp[i][i] = 1;
    }

    for (int n = 1; n <= 30; n++) {
        for (int r = 1; r < n; r++) {
            dp[n][r] = dp[n - 1][r - 1] + dp[n - 1][r];
        }
    }

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        printf("%d\n", dp[M][N]);
    }

    return 0;
}