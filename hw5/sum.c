#include <stdio.h>
#include <math.h>
int Sum(int n, int t);
int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    int res = 0;
    for (int i = 1; i <= n; i++) res += Sum(i, t);
    printf("%d", res);
}
int Sum(int n, int t) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (int) (t * pow(10, n - i - 1));
    }
    return sum;
}