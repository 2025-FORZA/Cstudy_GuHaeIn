#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double arr[1000], max = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += (arr[i] / max) * 100;
    }

    printf("%lf\n", sum / n);
    return 0;
}