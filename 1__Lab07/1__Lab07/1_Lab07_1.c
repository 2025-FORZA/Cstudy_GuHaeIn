#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int cow[11];       
    int crossed[11];   
    for (int i = 1; i <= 10; i++) {
        cow[i] = -1;      
        crossed[i] = 0;   
    }

    for (int i = 0; i < N; i++) {
        int num, pos;
        scanf("%d %d", &num, &pos); 

        if (cow[num] == -1) {
            cow[num] = pos; 
        }
        else if (cow[num] != pos) {
            crossed[num]++;     
            cow[num] = pos;     
        }
    }

    int total = 0;
    for (int i = 1; i <= 10; i++) {
        total += crossed[i]; 
    }

    printf("%d\n", total);
    return 0;
}
