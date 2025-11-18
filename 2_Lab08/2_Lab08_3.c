#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    char files[50][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", files[i]);
    }

    int len = strlen(files[0]);
    char pattern[51];

    for (int i = 0; i < len; i++) {
        char c = files[0][i];
        int same = 1;
        for (int j = 1; j < n; j++) {
            if (files[j][i] != c) {
                same = 0;
                break;
            }
        }
        pattern[i] = same ? c : '?';
    }
    pattern[len] = '\0';

    printf("%s\n", pattern);

    return 0;

}