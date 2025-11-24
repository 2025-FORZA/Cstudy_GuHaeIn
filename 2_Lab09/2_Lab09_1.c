#include <stdio.h>
#include <string.h>

int endsWithCheese(char* s) {
    int len = strlen(s);
    if (len < 6) return 0;
    return strcmp(s + len - 6, "Cheese") == 0;
}

int main() {
    int N;
    scanf("%d", &N);

    char topping[101];
    char cheeses[100][101];
    int cheeseCount = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s", topping);

        if (endsWithCheese(topping)) {

            int dup = 0;
            for (int j = 0; j < cheeseCount; j++) {
                if (strcmp(cheeses[j], topping) == 0) {
                    dup = 1;
                    break;
                }
            }
            if (!dup) {
                strcpy(cheeses[cheeseCount], topping);
                cheeseCount++;
            }
        }
    }

    if (cheeseCount >= 4)
        printf("yummy\n");
    else
        printf("sad\n");

    return 0;
}