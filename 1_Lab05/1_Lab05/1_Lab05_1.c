#include <stdio.h>

#define MAX_RANGE 1000001 

int main() {
    long long min, max;
    scanf("%lld %lld", &min, &max);

    char isNotSquareFree[MAX_RANGE] = { 0 };

    for (long long i = 2; i * i <= max; i++) {
        long long square = i * i;

        long long start = min / square;
        if (min % square != 0)
            start++;

        for (long long j = start; square * j <= max; j++) {
            isNotSquareFree[square * j - min] = 1;
        }
    }

    int count = 0;
    for (long long i = 0; i <= max - min; i++) {
        if (isNotSquareFree[i] == 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
