#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;

        printf("%d%02d\n", floor, room);
    }

    return 0;
}
