#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int weight;
    int height;
} Person;

int main() {
    int N;
    scanf("%d", &N);

    Person* people = (Person*)malloc(sizeof(Person) * N);
    int* rank = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &people[i].weight, &people[i].height);
        rank[i] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (people[j].weight > people[i].weight &&
                people[j].height > people[i].height) {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", rank[i]);
    }
    printf("\n");

    free(people);
    free(rank);

    return 0;
}
