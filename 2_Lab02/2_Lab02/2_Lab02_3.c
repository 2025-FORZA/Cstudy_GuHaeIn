#include <stdio.h>

typedef struct {
    int to, cost;
} Edge;

Edge graph[1001][1001];
int edgeCount[1001];
int visited[1001];
int N, M;
int answer;

void dfs(int cur, int target, int dist) {
    if (cur == target) {
        answer = dist;
        return;
    }
    visited[cur] = 1;

    for (int i = 0; i < edgeCount[cur]; i++) {
        int next = graph[cur][i].to;
        int cost = graph[cur][i].cost;
        if (!visited[next]) {
            dfs(next, target, dist + cost);
        }
    }
}

int main() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N - 1; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        graph[a][edgeCount[a]].to = b;
        graph[a][edgeCount[a]++].cost = c;
        graph[b][edgeCount[b]].to = a;
        graph[b][edgeCount[b]++].cost = c;
    }

    for (int i = 0; i < M; i++) {
        int s, e;
        scanf("%d %d", &s, &e);

        for (int j = 1; j <= N; j++) visited[j] = 0;
        answer = 0;
        dfs(s, e, 0);
        printf("%d\n", answer);
    }
    return 0;
}