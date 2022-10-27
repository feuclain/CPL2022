#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int steps = 0, max = 0;
    while (n > 0) {
        if (n == 1) {
            printf("%d %d", steps, max);
            break;
        }
        if (n >= max) {
            max = n;
        }
        steps++;
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
    }
    return 0;
}
