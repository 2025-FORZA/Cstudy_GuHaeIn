#include <stdio.h>
#include <string.h>

int main(void) {

    int N;
    if (scanf("%d", &N) != 1) return 0;

    char channels[101][101];
    for (int i = 0; i < N; i++) {
        scanf("%s", channels[i]);
    }

    int pos1 = -1;
    for (int i = 0; i < N; i++) {
        if (strcmp(channels[i], "KBS1") == 0) {
            pos1 = i;
            break;
        }
    }

    char out[1000] = "";

    for (int i = 0; i < pos1; i++) strcat(out, "1");

    for (int i = 0; i < pos1; i++) strcat(out, "4");

    char temp[101];
    strcpy(temp, channels[pos1]);
    for (int i = pos1; i > 0; i--) {
        strcpy(channels[i], channels[i - 1]);
    }
    strcpy(channels[0], temp);

    int pos2 = -1;
    for (int i = 0; i < N; i++) {
        if (strcmp(channels[i], "KBS2") == 0) {
            pos2 = i;
            break;
        }
    }

    for (int i = 0; i < pos2; i++) strcat(out, "1");

    for (int i = 0; i < pos2 - 1; i++) strcat(out, "4");

    printf("%s\n", out);
    return 0;

}