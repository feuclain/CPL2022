#include<stdio.h>
#include<math.h>

int main() {
    double p1 = 4 * atan(1.0 / 5) - atan(1.0 / 239);
    double p2 = (log(pow(640320, 3) + 744) / sqrt(163));
    printf("%.15lf\n", 4 * p1);
    printf("%.15lf", p2);
}