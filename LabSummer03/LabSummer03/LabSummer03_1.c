#include <stdio.h>

#define MOD 10007

int main() {
    int n;
    scanf("%d", &n);

    int rec[1001];
    rec[1] = 1;
    rec[2] = 3;

    for (int i = 3; i <= n; i++) {
        rec[i] = (rec[i - 1] + 2 * rec[i - 2]) % MOD;
    }

    printf("%d\n", rec[n]);
    return 0;
}
