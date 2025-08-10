#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vlqh[21];
    vlqh[0] = 0;
    vlqh[1] = 1;

    for (int i = 2; i <= n; i++) {
        vlqh[i] = vlqh[i - 1] + vlqh[i - 2];
    }

    printf("%d\n", vlqh[n]);
    return 0;
}