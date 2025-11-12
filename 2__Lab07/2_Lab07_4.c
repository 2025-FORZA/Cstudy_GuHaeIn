#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int result = 0;

    for (int i = 1; i < N; i++) {
        int num = i;
        int sum = i;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == N) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}