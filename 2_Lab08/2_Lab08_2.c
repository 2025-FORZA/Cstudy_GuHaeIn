#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {

    char* wordA = *(char**)a;
    char* wordB = *(char**)b;

    int lenA = strlen(wordA);
    int lenB = strlen(wordB);

    if (lenA != lenB)
        return lenA - lenB;
    else
        return strcmp(wordA, wordB);
}

int main() {

    int n;
    scanf("%d", &n);

    char** words = malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        words[i] = malloc(51 * sizeof(char));
        scanf("%s", words[i]);
    }

    qsort(words, n, sizeof(char*), compare);

    printf("%s\n", words[0]);

    for (int i = 1; i < n; i++) {
        if (strcmp(words[i], words[i - 1]) != 0)
            printf("%s\n", words[i]);
    }

    for (int i = 0; i < n; i++)
        free(words[i]);
    free(words);

    return 0;

}