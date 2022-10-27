#include<stdio.h>
long int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    long int res = 0l;
    for (int i = 1; i < n + 1; i++){
        res += fact(i);
    }
    res = res % 1000000007;
    printf("%ld", res);
    return 0;
}
