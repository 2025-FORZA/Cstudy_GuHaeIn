#include <stdio.h>
#include <string.h>

int idx(char c) {
    if (c == 'A') return 0;
    if (c == 'G') return 1;
    if (c == 'C') return 2;
    return 3; // 'T'
}

int main() {
    int N;
    scanf("%d", &N);

    char dna[1000005];
    scanf("%s", dna);

    char table[4][4] = {
        {'A','C','A','G'}, // A
        {'C','G','T','A'}, // G
        {'A','T','C','G'}, // C
        {'G','A','G','T'}  // T
    };

    char result = dna[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        result = table[idx(dna[i])][idx(result)];
    }

    printf("%c\n", result);
    return 0;
}