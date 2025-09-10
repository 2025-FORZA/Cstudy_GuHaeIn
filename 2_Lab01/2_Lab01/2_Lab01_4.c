#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int T[20] = { 0 }, P[20] = { 0 };
    int dp[20] = { 0 };
    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &T[i], &P[i]);
    }

    for (int i = N; i >= 1; i--) {
        if (i + T[i] <= N + 1) {
            int take = P[i] + dp[i + T[i]];
            int skip = dp[i + 1];
            dp[i] = (take > skip) ? take : skip;
        }
        else {
            dp[i] = dp[i + 1];
        }
    }

    printf("%d\n", dp[1]);
    return 0;
}