#include<stdio.h>
#include <stdbool.h>
#define N 52
int main() {
    int n, m, x0, y0;
    char map[N][N];
    bool vis[N][N];
    int ans = 0;
    scanf("%d %d %d %d\n", &n, &m, &x0, &y0);
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            scanf("%c", &map[i][j]);
            if (map[i][j] == '#') ans++;
            vis[i][j] = false;
        }
        getchar();
    }
    printf("%d\n", ans);
    int xi = x0;
    int yi = y0;
    int vectors[4][2] = {{0,  1},
                         {0,  -1},
                         {1,  0},
                         {-1, 0}};
    printf("%d %d\n", x0, y0);
    vis[x0][y0] = true;
    while (true) {
        int stp = 0;
        for (int k = 0; k < 4; k++) {
            int newI = xi + vectors[k][0];
            int newJ = yi + vectors[k][1];
            if (map[newI][newJ] == '#' && vis[newI][newJ] == false) {
                xi = newI;
                yi = newJ;
                printf("%d %d\n", xi, yi);
                vis[newI][newJ] = true;
                stp++;
                continue;
            }
        }
        if (stp == 0) break;
    }
}