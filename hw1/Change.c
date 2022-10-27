#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    while (n >= 50) {
        n -= 50;
        a++;
    }
    while (n >= 20) {
        n -= 20;
        b++;
    }
    while (n >= 10) {
        n -= 10;
        c++;
    }
    while (n >= 5) {
        n -= 5;
        d++;
    }
    while (n >= 1) {
        n -= 1;
        e++;
    }
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    return 0;
}
