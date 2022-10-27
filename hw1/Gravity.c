#include <stdio.h>
#include <math.h>
int main() {
    double m, R;
    scanf("%lf %lf", &m, &R);
    double G = 6.674e-11;
    double M = 77.15;
    double F = (G * M * m) / (pow(R, 2));
    printf("%.3e", F);
}
