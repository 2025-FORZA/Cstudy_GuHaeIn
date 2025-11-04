#include <stdio.h>
#include <string.h>

int main() {

    char s[16];
    scanf("%s", s);
    int sum = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'C') sum += 3;
        else if (s[i] <= 'F') sum += 4;
        else if (s[i] <= 'I') sum += 5;
        else if (s[i] <= 'L') sum += 6;
        else if (s[i] <= 'O') sum += 7;
        else if (s[i] <= 'S') sum += 8;
        else if (s[i] <= 'V') sum += 9;
        else sum += 10;
    }

    printf("%d\n", sum);

    return 0;
}