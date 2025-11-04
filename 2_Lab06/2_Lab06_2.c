#include <stdio.h>
#include <string.h>

int main() {

    int N;
    scanf("%d", &N);

    int num = 666;
    int count = 0;
    char str[10];

    while (1) {
        sprintf(str, "%d", num);
        if (strstr(str, "666") != NULL) {
            count++;
        }
        if (count == N) {
            printf("%d\n", num);
            break;
        }
        num++;
    }
    return 0;
}