#include<stdio.h>
#include<math.h>
int main() {
    int len, N;
    scanf("%d %d", &len, &N);
    char s[len];
    scanf("%s", s);
    int res = 0;
    for (int i = 0; i < len; i++) {
        int asc = (int) s[i];
        if (asc >= 48 && asc <= 57) { //0-9
            if (asc - 48 >= N) {
                printf("Error");
                return 0;
            }
            else {
                res += (int) ((asc- 48) * pow(N, len - 1 - i));
            }
        }
        else if (asc >= 65 && asc <= 90) { //A-Z
            if (asc - 65 >= N - 10) {
                printf("Error");
                return 0;
            }
            else {
                res += (int) ((asc - 65 + 10) * pow(N, len - 1 - i));
            }
        }
    }
    printf("%d", res);
    return 0;
}