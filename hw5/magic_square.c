#include <stdio.h>
#include <math.h>
int s[2000][2000];
void put(int sq[][2000], int len);
void Print(int sq[][2000], int len);
int main() {
    int n;
    scanf("%d",&n);
    put(s, n);
    Print(s, n);
    return 0;
}
void put(int sq[][2000], int len) {
    sq[1][(len + 1) / 2] = 1;
    int i = 1, j = (len + 1) / 2;
    for (int num = 2; num <= pow(len, 2); num++) {
        if ((num - 1) % len == 0) i++;
        else {
            i--;
            j++;
        }
        if (i == 0) i = len;
        if (j == len + 1) j = 1;
        sq[i][j] = num;
    }
}

void Print(int sq[][2000], int len) {
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            printf("%d", sq[i][j]);
        }
        printf("\n");
    }
}
