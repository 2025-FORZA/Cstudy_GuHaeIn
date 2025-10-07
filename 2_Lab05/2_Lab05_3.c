#include <stdio.h>
#include <string.h>

int main() {
    char document[2501];
    char word[51];

    scanf("%[^\n]", document);
    getchar();
    scanf("%[^\n]", word);

    int len_doc = strlen(document);
    int len_word = strlen(word);
    int count = 0;

    for (int i = 0; i <= len_doc - len_word; ) {
        if (strncmp(&document[i], word, len_word) == 0) {
            count++;
            i += len_word;
        }
        else {
            i++;
        }
    }

    printf("%d\n", count);
    return 0;
}