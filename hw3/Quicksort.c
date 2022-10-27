#include<stdio.h>
int a[1000000 + 10];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int pivot = a[k - 1];
    int l = 0, r = n - 1;
    while (l != r) {
        while (a[l] < pivot && l != r) l++;
        while (a[r] >= pivot && l != r) r--;
        if (l != r) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    int ind;
    for (int i = 0; i < n; i++) {
        if (a[i] == pivot) ind = i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > pivot && i < ind) {
            a[ind] = a[i];
            a[i] = pivot;
            break;
        }
    }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}