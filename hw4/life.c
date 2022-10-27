#include<stdio.h>
#include<string.h>
#define N 1005
int main() {
    int n;
    char linear[N];
    scanf("%d", &n);
    scanf("%s", linear);
    int len = (int) strlen(linear);
    char line[N + 6];
    for (int i = 0; i <= 2; i++) {
        line[i] = '.';
        line[len + 3 + i] = '.';
    }
    for (int i = 3; i < len + 3; i++) {
        line[i] = linear[i - 3];
    }
    for (int i = 0; i < n; i++) { //imitate n rounds
        char imitate[len + 6];
        memset(imitate, '.', len + 6);
        for (int j = 3; j < len + 3; j++) {
            int countA = 0;
            int countB = 0;
            for (int k = 1; k <= 3; k++) {
                if (line[j + k] == 'A') countA++;
                if (line[j - k] == 'A') countA++;
                if (line[j + k] == 'B') countB++;
                if (line[j - k] == 'B') countB++;
            }
            if (line[j] == '.') {
                if (countA >= 2 && countA <= 4 && countB == 0) imitate[j] = 'A';
                if (countB >= 2 && countB <= 4 && countA == 0) imitate[j] = 'B';
            }
            if (line[j] == 'A') {
                if (countB > 0) imitate[j] = '.';
                else {
                    if (countA >= 5 || countA <= 1) imitate[j] = '.';
                    else imitate[j] = 'A';
                }
            }
            if (line[j] == 'B') {
                if (countA > 0) imitate[j] = '.';
                else {
                    if (countB >= 5 || countB <= 1) imitate[j] = '.';
                    else imitate[j] = 'B';
                }
            }
        }
        strncpy(line, imitate, len + 6);
    }
    for (int i = 3; i < len + 3; i++) {
        printf("%c", line[i]);
    }
}