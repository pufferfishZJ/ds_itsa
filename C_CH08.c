#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int n = a + 2*b + 2*c + 2*d - 2*e;
    if(n < 25) printf("D\n");
    else if(n < 35) printf("C\n");
    else if(n < 45) printf("B\n");
    else printf("A\n");
    return 0;
}