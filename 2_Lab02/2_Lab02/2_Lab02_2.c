#include <stdio.h>

int graph[1001][1001];
int visited[1001];
int N, M;

void dfs(int v) {
    visited[v] = 1;
    for (int i = 1; i <= N; i++) {
        if (graph[v][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main(void) {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}