#include <stdio.h>

int graph[101][101];
int visited[101] = { 0, };
int N, M;
int count = 0;

void dfs(int v) {
    visited[v] = 1;
    count++;

    for (int i = 1; i <= N; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    int x, y;

    scanf("%d", &N);
    scanf("%d", &M);

    for (int i = 0; i < M; i++) {

        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    dfs(1);
    printf("%d", count - 1);

    return 0;
}