#include <stdio.h>
#define N 2005
void permutate(int arr[], int len);
void Print(const int arr[], int len);
int main() {
    int n;
    int perm[N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &perm[i]);
    permutate(perm, n);
    Print(perm, n);
}
void permutate(int arr[], int len) {
    int i, j;
    for (i = len - 2; arr[i] > arr[i + 1]; i--);
    j = i + 1;
    for (int k = i + 2; k < len; k++) {
        if ((arr[i] < arr[k]) && (arr[j] > arr[k])) j = k;
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    for (int l = i + 1, r = len - 1; l < r; l++, r--) {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }
}
void Print(const int arr[], int len) {
    for (int i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\n");
}