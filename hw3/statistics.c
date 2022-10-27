#include<stdio.h>
int main() {
    int n, lowercase[26] = {0}, uppercase[26] = {0};
    scanf("%d\n", &n);
    char str[1005];
    scanf("%s", str);
    for (int i = 0; i < n; i++) { //计数出现次数
        for (int j = 0; j < 26; j++) {
            if ((int) str[i] == 97 + j) lowercase[j]++;
            if ((int) str[i] == 65 + j) uppercase[j]++;
        }
    }
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (lowercase[i] >= max) max = lowercase[i];
        if (uppercase[i] >= max) max = uppercase[i];
    }
    int spacecount = 0, count = 0;
    char cout[77] = {' '};
    for (int i = 0; i < 26; i++) {
        if (lowercase[i] > 0 && uppercase[i] > 0) {
            cout[spacecount + count++] = (char) (97 + i);
            cout[spacecount + count++] = (char) (65 + i);
            spacecount++;
        }
        else if (lowercase[i] > 0 && uppercase[i] == 0) {
            cout[spacecount + count++] = (char) (97 + i);
            spacecount++;
        }
        else if (lowercase[i] == 0 && uppercase[i] > 0) {
            cout[spacecount + count++] = (char) (65 + i);
            spacecount++;
        }
    }
    int len = count + spacecount - 1;
    for (int i = max; i > 0; i--) {
        for (int j = 0; j < len; j++) {
            if ((cout[j] >= 'a' && cout[j] <= 'z' && lowercase[cout[j] - 97] >= i) || (cout[j] >= 'A' && cout[j] <= 'Z' && uppercase[cout[j] - 65] >= i)) {
                printf("=");
            }
            else printf(" ");
        }
        printf("\n");
    }

    for (int i = 0; i < len; i++) printf("-");  //输出的倒数第二行
    printf("\n");
    for (int i = 0; i < 26; i++) { //输出的最后一行
        if (lowercase[i] > 0 && uppercase[i] > 0) { //大小写合并
            printf("%c%c ", 97 + i, 65 + i);
        }
        else if (lowercase[i] > 0 && uppercase[i] == 0) { //仅小写
            printf("%c ", 97 + i);
        }
        else if (lowercase[i] == 0 && uppercase[i] > 0) { //仅大写
            printf("%c ", 65 + i);
        }
    }
}