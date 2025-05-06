#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%d\n", add(A, B));

    return 0;
}
