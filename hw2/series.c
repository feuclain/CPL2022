#include<stdio.h>
#include<math.h>
int main() {
    float x;
    int n;
    scanf("%f %d", &x, &n);
    double res = 0;
    for (int i = 0; i <= n; i++) {
        res += (pow(-1.0, i) * pow(x, 2 * i + 1.0)) / (2 * i + 1.0);
    }
    printf("%.10lf", 4 * res);
    return 0;
}