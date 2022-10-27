#include<stdio.h>
int max(int a, int b) {
    if (a > b) return a;
    return b;
}
int min(int a, int b) {
    if (a > b) return b;
    return a;
}
int main() {
    int xa, ya, xb, yb, xc, yc;
    scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);
    int steps = 0;
    char path[1000000];
    if (xa == xb) {
        if (xc != xa || (xc == xa && (yc > max(ya, yb) || yc < min(ya, yb)))) {
            if (ya > yb) {
                for (int i = 0; i < (ya - yb); i++) {
                    steps++;
                    path[i] = 'D';
                }
            }
            else {
                for (int i = 0; i < (yb - ya); i++) {
                    steps++;
                    path[i] = 'U';
                }
            }
        }
        else {
            if (ya > yb) {
                for (int i = 0; i < (ya - (yc + 1)); i++) {
                    steps++;
                    path[i] = 'D';
                }
                steps += 4;
                path[ya - (yc + 1)] = 'L', path[ya - (yc + 1) + 1] = 'D', path[ya - (yc + 1) + 2] = 'D', path[ya - (yc + 1) + 3] = 'R';
                for (int i = (ya - (yc + 1) + 4); i < (ya - yb + 2); i++) {
                    steps++;
                    path[i] = 'D';
                }
            }
            else {
                for (int i = 0; i < (yb - (yc + 1)); i++) {
                    steps++;
                    path[i] = 'U';
                }
                steps += 4;
                path[yb - (yc + 1)] = 'L', path[yb - (yc + 1) + 1] = 'U', path[yb - (yc + 1) + 2] = 'U', path[yb - (yc + 1) + 3] = 'R';
                for (int i = (yb - (yc + 1) + 4); i < (yb - ya + 2); i++) {
                    steps++;
                    path[i] = 'U';
                }
            }
        }
    }
    else if (ya == yb){
        if (yc != ya || (yc == ya && (xc > max(xa, xb) || xc < min(xa, xb)))) {
            if (xa > xb) {
                for (int i = 0; i < (xa - xb); i++) {
                    steps++;
                    path[i] = 'L';
                }
            }
            else {
                for (int i = 0; i < (xb - xa); i++) {
                    steps++;
                    path[i] = 'R';
                }
            }
        }
        else {
            if (xa > xb) {
                for (int i = 0; i < (xa - (xc + 1)); i++) {
                    steps++;
                    path[i] = 'L';
                }
                steps += 4;
                path[xa - (xc + 1)] = 'D', path[xa - (xc + 1) + 1] = 'L', path[xa - (xc + 1) + 2] = 'L', path[xa - (xc + 1) + 3] = 'U';
                for (int i = (xa - (xc + 1) + 4); i < (xa -xb + 2); i++) {
                    steps++;
                    path[i] = 'L';
                }
            }
            else {
                for (int i = 0; i < (xb - (xc + 1)); i++) {
                    steps++;
                    path[i] = 'R';
                }
                steps += 4;
                path[xb - (xc + 1)] = 'D', path[xb - (xc + 1) + 1] = 'R', path[xb - (xc + 1) + 2] = 'R', path[xb - (xc + 1) + 3] = 'U';
                for (int i = (xb - (xc + 1) + 4); i < (xb - xa + 2); i++) {
                    steps++;
                    path[i] = 'R';
                }
            }
        }
    }
    else {
        if (xa < xb && ya < yb) {
            if (xc == xa && ya <= yc && yc <= yb || yc == yb && xa <= xc && xc <= xb) {
                for (int i = 0; i < (xb - xa); i++) {
                    steps++;
                    path[i] = 'R';
                }
                for (int i = (xb - xa); i < (xb - xa + yb - ya); i++) {
                    steps++;
                    path[i] = 'U';
                }
            }
            else {
                for (int i = 0; i < (yb - ya); i++) {
                    steps++;
                    path[i] = 'U';
                }
                for (int i = (yb - ya); i < (xb - xa + yb - ya); i++) {
                    steps++;
                    path[i] = 'R';
                }
            }
        }
        else if (xa < xb && ya > yb) {
            if (xc == xa && yb <= yc && yc <= ya || yc == yb && xa <= xc && xc <= xb) {
                for (int i = 0; i < (xb - xa); i++) {
                    steps++;
                    path[i] = 'R';
                }
                for (int i = (xb - xa); i < (xb - xa + ya - yb); i++) {
                    steps++;
                    path[i] = 'D';
                }
            }
            else {
                for (int i = 0; i < (ya - yb); i++) {
                    steps++;
                    path[i] = 'D';
                }
                for (int i = (ya - yb); i < (xb - xa + ya- yb); i++) {
                    steps++;
                    path[i] = 'R';
                }
            }
        }
        else if (xa > xb && ya < yb) {
            if (xc == xa && ya <= yc && yc <= yb || yc == yb && xb <= xc && xc <= xa) {
                for (int i = 0; i < (xa - xb); i++) {
                    steps++;
                    path[i] = 'L';
                }
                for (int i = (xa - xb); i < (xa - xb + yb - ya); i++) {
                    steps++;
                    path[i] = 'U';
                }
            }
            else {
                for (int i = 0; i < (yb - ya); i++) {
                    steps++;
                    path[i] = 'U';
                }
                for (int i = (yb - ya); i < (xa - xb + yb - ya); i++) {
                    steps++;
                    path[i] = 'L';
                }
            }
        }
        else {
            if (xc == xa && yb <= yc && yc <= ya || yc == yb && xb <= xc && xc <= xa) {
                for (int i = 0; i < (xa - xb); i++) {
                    steps++;
                    path[i] = 'L';
                }
                for (int i = (xa - xb); i < (xa - xb + ya - yb); i++) {
                    steps++;
                    path[i] = 'D';
                }
            }
            else {
                for (int i = 0; i < (ya - yb); i++) {
                    steps++;
                    path[i] = 'D';
                }
                for (int i = (ya - yb); i < (xa - xb + ya - yb); i++) {
                    steps++;
                    path[i] = 'L';
                }
            }
        }
    }
    printf("%d\n", steps);
    for (int i = 0; i < steps; i++) {
        printf("%C", path[i]);
    }
}