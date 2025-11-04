#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 501
#define TABLE_SIZE 20011

typedef struct Node {
    char str[MAX_LEN];
    struct Node* next;
} Node;

Node* table[TABLE_SIZE];

unsigned int hash(const char* s) {
    unsigned int h = 0;
    while (*s) h = (h * 131 + *s++) % TABLE_SIZE;
    return h;
}

void insert(const char* s) {
    unsigned int h = hash(s);
    Node* node = malloc(sizeof(Node));
    strcpy(node->str, s);
    node->next = table[h];
    table[h] = node;
}

int find(const char* s) {
    unsigned int h = hash(s);
    Node* cur = table[h];
    while (cur) {
        if (strcmp(cur->str, s) == 0) return 1;
        cur = cur->next;
    }
    return 0;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char s[MAX_LEN];
    for (int i = 0; i < N; i++) {
        scanf("%s", s);
        insert(s);
    }

    int count = 0;
    for (int i = 0; i < M; i++) {
        scanf("%s", s);
        if (find(s)) count++;
    }

    printf("%d\n", count);

    return 0;
}