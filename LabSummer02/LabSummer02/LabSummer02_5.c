#include <stdio.h>

int get_time(char ch) {
    if (ch >= 'A' && ch <= 'C') return 3;
    else if (ch >= 'D' && ch <= 'F') return 4;
    else if (ch >= 'G' && ch <= 'I') return 5;
    else if (ch >= 'J' && ch <= 'L') return 6;
    else if (ch >= 'M' && ch <= 'O') return 7;
    else if (ch >= 'P' && ch <= 'S') return 8;
    else if (ch >= 'T' && ch <= 'V') return 9;
    else if (ch >= 'W' && ch <= 'Z') return 10;
    return 0;
}

int main() {
    char word[16];
    int total = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; ++i) {
        total += get_time(word[i]);
    }

    printf("%d\n", total);

    return 0;
}
