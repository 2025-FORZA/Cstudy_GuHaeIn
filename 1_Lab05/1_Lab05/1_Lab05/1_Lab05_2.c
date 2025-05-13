#include <stdio.h>

#define INF 4000000000LL

int x[500000], y[500000];
int tmpx[500000], tmpy[500000];
int idx[500000], tmpidx[500000];

long long dist(int i, int j) {
    long long dx = x[i] - x[j];
    long long dy = y[i] - y[j];
    return dx * dx + dy * dy;
}

void merge(int* a, int l, int r, int* by) {
    if (r - l <= 1) return;
    int m = (l + r) / 2;
    merge(a, l, m, by);
    merge(a, m, r, by);
    int i = l, j = m, k = l;
    while (i < m && j < r) {
        if (by[a[i]] < by[a[j]]) tmpidx[k++] = a[i++];
        else tmpidx[k++] = a[j++];
    }
    while (i < m) tmpidx[k++] = a[i++];
    while (j < r) tmpidx[k++] = a[j++];
    for (i = l; i < r; i++) a[i] = tmpidx[i];
}

long long closest(int* a, int l, int r) {
    if (r - l <= 3) {
        long long d = INF;
        for (int i = l; i < r; i++)
            for (int j = i + 1; j < r; j++)
                if (dist(a[i], a[j]) < d)
                    d = dist(a[i], a[j]);
        return d;
    }
    int m = (l + r) / 2;
    int midx = x[a[m]];
    long long d = closest(a, l, m);
    long long dr = closest(a, m, r);
    if (dr < d) d = dr;

    merge(a, l, r, y);

    int temp[500000], cnt = 0;
    for (int i = l; i < r; i++) {
        if ((long long)(x[a[i]] - midx) * (x[a[i]] - midx) < d)
            temp[cnt++] = a[i];
    }

    for (int i = 0; i < cnt; i++) {
        for (int j = i + 1; j < cnt && (long long)(y[temp[j]] - y[temp[i]]) * (y[temp[j]] - y[temp[i]]) < d; j++) {
            long long td = dist(temp[i], temp[j]);
            if (td < d) d = td;
        }
    }

    return d;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        idx[i] = i;
    }

    merge(idx, 0, n, x);

    printf("%lld\n", closest(idx, 0, n));
    return 0;
}