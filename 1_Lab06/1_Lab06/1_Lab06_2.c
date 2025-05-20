#include <stdio.h>

int main() {
    char s[101];
    int alphabet[26];

    for (int i = 0; i < 26; i++)
        alphabet[i] = -1;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        int idx = s[i] - 'a';
        if (alphabet[idx] == -1) {
            alphabet[idx] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    return 0;
}
