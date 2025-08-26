#include <stdio.h>
#include <string.h>

int main() {
    char num[11];
    scanf("%s", num);

    int len = strlen(num);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (num[i] < num[j]) {
                char tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    printf("%s\n", num);
    return 0;
}