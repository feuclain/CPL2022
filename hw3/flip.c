#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n); //n位0
    int bits[n];
    for (int i = 0; i <= n; i++) {
        bits[i] = 0;
    }
    for (int i = 1; i <= n; i++) {//n次flip
        for (int j = 1; j <= n; j++) {
            if (j % i == 0) { //i的倍数
                bits[j - 1] = 1 - bits[j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (bits[i] == 1) printf("%d ", i + 1);
    }
}