#include<stdio.h>
#define N 105
int main() {
    int n;
    scanf("%d", &n);
    char map[N][N];
    for (int i = 0; i < n; i++) {
        scanf("%s", map[i]);
    }
    for (int i = 1; i < n - 1; i++) { //非边界情况
        for (int j = 1; j < n - 1; j++) {
            int count = 0;
            int vectors[8][2] = {
                    {0,1}, {0, -1}, {1, 0}, {-1,0},
                    {1,1}, {1, -1}, {-1, 1}, {-1, -1}
            };
            for (int k = 0; k < 8; k++) {
                int newI = i + vectors[k][0];
                int newJ = j + vectors[k][1];
                if (map[newI][newJ] == '*') count++;
            }
            if (map[i][j] != '*') map[i][j] = (char) (count + '0');
        }
    }
    int count1 = 0; //四点边界
    count1 += (map[0][1] == '*') ? 1 : 0;
    count1 += (map[1][0] == '*') ? 1 : 0;
    count1 += (map[1][1] == '*') ? 1 : 0;
    if (map[0][0] != '*') map[0][0] = (char) (count1 + '0');
    int count2 = 0;
    count2 += (map[0][n - 2] == '*') ? 1 : 0;
    count2 += (map[1][n - 1] == '*') ? 1 : 0;
    count2 += (map[1][n - 2] == '*') ? 1 : 0;
    if (map[0][n - 1] != '*') map[0][n - 1] = (char) (count2 + '0');
    int count3 = 0;
    count3 += (map[n - 1][1] == '*') ? 1 : 0;
    count3 += (map[n - 2][0] == '*') ? 1 : 0;
    count3 += (map[n - 2][1] == '*') ? 1 : 0;
    if (map[n - 1][0] != '*') map[n - 1][0] = (char) (count3 + '0');
    int count4 = 0;
    count4 += (map[n - 1][n - 2] == '*') ? 1 : 0;
    count4 += (map[n - 2][n - 1] == '*') ? 1 : 0;
    count4 += (map[n - 2][n - 2] == '*') ? 1 : 0;
    if (map[n - 1][n - 1] != '*') map[n - 1][n - 1] = (char) (count4 + '0');

    for (int j = 1; j < n - 1; j++) { //剩余边界
        int count = 0;
        int vectors[5][2] = {{1, 0}, {0,1}, {0, -1}, {1, 1}, {1, -1}};
        for (int k = 0; k < 5; k++) {
            int newI = vectors[k][0];
            int newJ = j + vectors[k][1];
            if (map[newI][newJ] == '*') count++;
        }
        if (map[0][j] != '*') map[0][j] = (char) (count + '0');
    }
    for (int j = 1; j < n - 1; j++) {
        int count = 0;
        int vectors[5][2] = {{-1, 0}, {0,1}, {0, -1}, {-1, 1}, {-1, -1}};
        for (int k = 0; k < 5; k++) {
            int newI = n - 1 + vectors[k][0];
            int newJ = j + vectors[k][1];
            if (map[newI][newJ] == '*') count++;
        }
        if (map[n - 1][j] != '*') map[n - 1][j] = (char) (count + '0');
    }
    for (int i = 1; i < n - 1; i++) {
        int count = 0;
        int vectors[5][2] = {{0, 1}, {1,0}, {-1, 0}, {1, 1}, {-1, 1}};
        for (int k = 0; k < 5; k++) {
            int newI = i + vectors[k][0];
            int newJ = vectors[k][1];
            if (map[newI][newJ] == '*') count++;
        }
        if (map[i][0] != '*') map[i][0] = (char) (count + '0');
    }
    for (int i = 1; i < n - 1; i++) {
        int count = 0;
        int vectors[5][2] = {{0, -1}, {1,0}, {-1, 0}, {1, -1}, {-1, -1}};
        for (int k = 0; k < 5; k++) {
            int newI = i + vectors[k][0];
            int newJ = n - 1 + vectors[k][1];
            if (map[newI][newJ] == '*') count++;
        }
        if (map[i][n - 1] != '*') map[i][n - 1] = (char) (count + '0');
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}