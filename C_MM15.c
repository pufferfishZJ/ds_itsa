#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a <= 100 && a >= 0 && b >= 0 && b <= 100){
            printf("inside\n");
        }else{
            printf("outside\n");
        }
    }
    return 0;
}