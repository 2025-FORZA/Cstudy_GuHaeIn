#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = -1;

    for (int f_kg = N / 5; f_kg >= 0; f_kg--) {
        int rest = N - f_kg * 5;
        if (rest % 3 == 0) {
            int t_kg = rest / 3;
            int total = f_kg + t_kg;
            if (count == -1 || total < count) {
                count = total;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}