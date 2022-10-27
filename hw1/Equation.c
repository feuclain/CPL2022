#include<stdio.h>
#include<math.h>
int main() {
    int p, q;
    scanf("%d %d", &p, &q);
    double p3 = pow(p / 3.0, 3);
    double q2 = pow(q / 2.0, 2);
    double x = cbrt((-q / 2.0 + sqrt( q2 + p3))) + cbrt(-q / 2.0 - sqrt(q2 + p3));
    printf("%.3lf", x);
}