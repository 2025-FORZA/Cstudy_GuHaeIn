#include <stdio.h>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int a = w - x;
    int b = h - y;

    int min = x;
    if (y < min) min = y;
    if (a < min) min = a;
    if (b < min) min = b;

    printf("%d\n", min);
    return 0;
}