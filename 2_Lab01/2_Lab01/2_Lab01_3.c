#include <stdio.h>

int main() {
    int T, k, n;
    int dp[15][15] = { 0 };

    for (int i = 1; i <= 14; i++) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= 14; i++) {
        for (int j = 1; j <= 14; j++) {
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        }
    }
    
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &k, &n);
        printf("%d\n", dp[k][n]);
    }

    return 0;
}