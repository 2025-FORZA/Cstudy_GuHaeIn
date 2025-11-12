#include <stdio.h>

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {

        int c;
        scanf("%d", &c);

        int quarter = c / 25;
        c %= 25;

        int dime = c / 10;
        c %= 10;

        int nickel = c / 5;
        c %= 5;

        int penny = c;

        printf("%d %d %d %d\n", quarter, dime, nickel, penny);
    }

    return 0;
}