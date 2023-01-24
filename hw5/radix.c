#include <stdio.h>
#include <math.h>
int determiner(int p, int q, int r);
int cal(int x, int B);
int main() {
    int p, q, r;
    scanf("%d %d %d", &p, &q, &r);
    printf("%d", determiner(p, q, r));
}
int cal(int x, int B) {
    int res = 0;
    int i = 0;
    while (x != 0) {
        res += (int)((x % 10) * pow(B, i));
        x /= 10;
        i++;
    }
    return res;
}
int determiner(int p, int q, int r) {
    for (int i = 2; i <= 40; i++) {
        if ((p % 10 >= i) || (q % 10 >= i) || (r % 10 >= i)) continue;
        int pi = cal(p, i);
        int qi = cal(q, i);
        int ri = cal(r, i);
        if (pi * qi == ri) return i;
    }
    return 0;
}
