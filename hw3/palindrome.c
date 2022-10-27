#include<stdio.h>
#define N 100005
int a[N];
char str[N];
int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    scanf("%s", str);
    for (int i = 0; i < n; i++) {
        if (str[i] != '?') printf("%c", str[i]);
        else {
            if (str[n - i - 1] != '?') printf("%c", str[n - i - 1]);
            else { //对称位置也为'?'
                if (i < n / 2) {
                    a[i] = count++;
                    int one = a[i] % 10;
                    int ten = a[i] / 10;
                    printf("%d%d", ten, one);
                }
                else {
                    int one = a[n - i - 1] % 10;
                    int ten = a[n - i - 1] / 10;
                    printf("%d%d", one, ten);
                }
            }
        }
    }
}