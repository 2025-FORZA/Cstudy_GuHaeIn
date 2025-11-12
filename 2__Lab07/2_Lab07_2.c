#include <stdio.h>
#include <string.h>

int main() {

    char A[10], B[10];

    scanf("%s %s", A, B);

    for (int i = 0; i < strlen(A); i++) {
        if (A[i] == '6') A[i] = '5';
    }
    for (int i = 0; i < strlen(B); i++) {
        if (B[i] == '6') B[i] = '5';
    }
    int min = atoi(A) + atoi(B);

    for (int i = 0; i < strlen(A); i++) {
        if (A[i] == '5') A[i] = '6';
    }
    for (int i = 0; i < strlen(B); i++) {
        if (B[i] == '5') B[i] = '6';
    }
    int max = atoi(A) + atoi(B);

    printf("%d %d\n", min, max);

    return 0;
}