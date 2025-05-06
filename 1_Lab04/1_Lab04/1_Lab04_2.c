#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int T, A, B;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", add(A, B));
    }

    return 0;
}
