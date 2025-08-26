#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[81];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int score = 0, sum = 0;

        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == 'O') {
                score++;
                sum += score;
            }
            else {
                score = 0;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}