#include <stdio.h>

int main() {

    int K;
    int stack[100000];
    int top = 0;
    int x;

    scanf("%d", &K);

    for (int i = 0; i < K; i++) {
        scanf("%d", &x);

        if (x == 0) {
            if (top > 0) top--;
        }
        else {
            stack[top++] = x;
        }
    }

    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += stack[i];
    }

    printf("%d\n", sum);
    return 0;
}