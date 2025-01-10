#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", 3*(n/6)*(n/6+1)-6*(n/12)*(n/12+1));
    return 0;
}