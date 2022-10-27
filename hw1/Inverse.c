#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int e = n % 10;
    n /= 10;
    int d = n % 10;
    n /= 10;
    int c = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    int a = n % 10;
    n /= 10;
    printf("%d%d%d%d%d", c, b, a, e, d);
}