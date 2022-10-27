#include<stdio.h>

int main() {
    int n, sum = 0, fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact = (fact % 10007) * (i % 10007);
        sum = (sum % 10007) + (fact % 10007);
    }
    printf("%d", sum % 10007);
}