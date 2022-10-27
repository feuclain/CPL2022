#include <stdio.h>
int main() {
    int sudo[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &sudo[i][j]);
            if (sudo[i][j] > 9) { //出现＞9不合法
                printf("NO");
                return 0;
            }
        }
    }
    int columnjudge[9] = {0};
    for (int i = 0; i < 9; i++) {
        int rowjudge[9] = {0};
        columnjudge[sudo[i][1] - 1]++;
        for (int j = 0; j < 9; j++) {
            rowjudge[sudo[i][j] - 1]++;
        }
        for (int k = 0; k < 9; k++) {
            if (rowjudge[k] > 1 || rowjudge[k] == 0) {
                printf("NO");
                return 0;
            }
        }
    }
    for (int k = 0; k < 9; k++) {
        if (columnjudge[k] > 1 || columnjudge[k] == 0) {
            printf("NO");
            return 0;
        }
    }
    for (int i = 0; i <= 6; i += 3) {
        for (int j = 0; j <= 6; j += 3) {
            int squarejudge[9] = {0};
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    squarejudge[sudo[i + k][j + l] - 1]++;
                }
            }
            for (int h = 0; h < 9; h++) {
                if (squarejudge[h] > 1 || squarejudge[h] == 0) {
                    printf("NO");
                    return 0;
                }
            }
        }
    }
    printf("YES");
    return 0;
}