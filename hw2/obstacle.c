#include<stdio.h>
#include<stdlib.h>
int main() {
    int xa, ya, xb, yb, xc, yc;
    scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);
    if (xa != xb && ya != yb) {
        printf("%d", abs(xa - xb) + abs(ya - yb)); // steps是固定的
        if ((((xc >= xa && xc <= xb) || (xc <= xa && xc >= xb)) && yc == ya) || (xc == xb && ((yc >= ya && yc <= yb) || (yc <= ya && yc >= yb)))) { // 先y后x
            for (int y = ya; y != yb; y += (yb > ya) ? 1 : -1) {
                if (yb > ya) printf("U");
                else printf("D");
            }
            for (int x = xa; x != xb; x += (xb > xa) ? 1 : -1) {
                if (xb > xa) printf("R");
                else printf("L");
            }
        }
        else { // 先x后y
            for (int x = xa; x != xb; x += (xb > xa) ? 1 : -1) {
                if (xb > xa) printf("R");
                else printf("L");
            }
            for (int y = ya; y != yb; y += (yb > ya) ? 1 : -1) {
                if (yb > ya) printf("U");
                else printf("D");
            }
        }
    }
    else if (xa == xb) {
        if (xc == xa && ((yc > ya && yc < yb) || (yc > yb && yc < ya))) {
            printf("%d", abs(xa - xb) + abs(ya - yb) + 2);
            printf("L");
            for (int y = ya; y != yb; y += (yb > ya) ? 1 : -1) {
                if (yb > ya) printf("U");
                else printf("D");
            }
            printf("R");
        }
        else {
            printf("%d", abs(xa - xb) + abs(ya - yb));
            for (int y = ya; y != yb; y += (yb > ya) ? 1 : -1) {
                if (yb > ya) printf("U");
                else printf("D");
            }
        }
    }
    else { // ya == yb
        if (yc == ya && ((xc > xa && xc < xb) || (xc > xb && xc < xa))) {
            printf("%d", abs(xa - xb) + abs(ya - yb) + 2);
            printf("D");
            for (int x = xa; x != xb; x += (xb > xa) ? 1 : -1) {
                if (xb > xa) printf("R");
                else printf("L");
            }
            printf("U");
        }
        else {
            printf("%d", abs(xa - xb) + abs(ya - yb));
            for (int x = xa; x != xb; x += (xb > xa) ? 1 : -1) {
                if (xb > xa) printf("R");
                else printf("L");
            }
        }
    }
}