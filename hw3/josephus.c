#include <stdio.h>
int helper(int n, int k) {
    if (n == 1) return 0;
    return (helper(n - 1, k) + k) % n;
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", helper(n, k) + 1);
    return 0;
}
