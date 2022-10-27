#include<stdio.h>
int main() {
    int n, k;
    char str[1000000];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        str[i] = getchar();
    }
    scanf("%d", &k);
    for (int i = k; i > 0; i--) {
        printf("%c", str[i]);
    }
    for(int i = n; i > k; i--) {
        printf("%c", str[i]);
    }
}