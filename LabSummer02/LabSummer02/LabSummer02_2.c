#include <stdio.h>

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    while (1) {
        int changed = 0;

        for (int i = 0; i < 4; i++) {
            if (a[i] > a[i + 1]) {

                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;

                for (int j = 0; j < 5; j++) {
                    printf("%d ", a[j]);
                }
                printf("\n");

                changed = 1;
            }
        }

        if (!changed) {
            break;
        }
    }

    return 0;
}
