#include<stdio.h>
#define N 105
int main() {
    int A[N][N];
    int B[N][N];
    int m, n, p;
    scanf("%d %d %d", &m, &n, &p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &A[i][j]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) scanf("%d", &B[i][j]);
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            int c = 0;
            for (int k = 0; k < n; k++) c += A[i][k] * B[k][j];
            printf("%d ", c);
        }
        printf("\n");
    }
}