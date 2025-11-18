#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int switches[101];
    for (int i = 1; i <= n; i++)
        scanf("%d", &switches[i]);

    int students;
    scanf("%d", &students);

    for (int i = 0; i < students; i++) {
        int gender, num;
        scanf("%d %d", &gender, &num);

        if (gender == 1) {
            for (int j = num; j <= n; j += num)
                switches[j] = !switches[j];
        }
        else {
            int left = num, right = num;
            while (left > 1 && right < n && switches[left - 1] == switches[right + 1]) {
                left--;
                right++;
            }
            for (int j = left; j <= right; j++)
                switches[j] = !switches[j];
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", switches[i]);
        if (i % 20 == 0) printf("\n");
    }

    printf("\n");

    return 0;

}