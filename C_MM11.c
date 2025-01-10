#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("NT10=%d\n", x/10);
    x %= 10;
    printf("NT5=%d\n", x/5);
    x %= 5;
    printf("NT1=%d\n", x);
    return 0;
}