#include<stdio.h>
int main() {
    int n, res = 0;
    int a[100000];
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        scanf("%d", &a[i]);
        res ^= a[i];
    }
    printf("%d", res);
    return 0;
}