#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n & 1) printf("odd\n");
        else printf("even\n");
    }
    return 0;
}