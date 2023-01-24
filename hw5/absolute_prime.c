#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool IsPrime(int x);
int Reverse(int x);
int main() {
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (IsPrime(i) && IsPrime(Reverse(i))) res++;
    }
    printf("%d", res);
}

bool IsPrime(int x) {
    for (int i = 2; i <= sqrt(x + 0.5); i++) {
        if (x % i == 0) return false;
    }
    return true;
}
int Reverse(int x) {
    int res = 0;
    while (x != 0) {
        int i = x % 10;
        res = 10 * res + i;
        x /= 10;
    }
    return res;
}