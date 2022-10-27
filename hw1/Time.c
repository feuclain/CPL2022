#include<stdio.h>
#include<string.h>

int main() {
    char month[10], weekday[10];
    char www[4], mmm[4];
    int day, year, hour, minute, second;
    scanf("%s %d %d %s %d %d %d", month, &day, &year, weekday, &hour, &minute, &second);
    strncpy(www, weekday, 3);
    strncpy(mmm, month, 3);
    printf("%s %s %02d %02d:%02d:%02d %04d", www, mmm, day, hour, minute, second, year);
}