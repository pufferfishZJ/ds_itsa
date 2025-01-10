#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n < 0) printf("error\n");
        else if(n < 60) printf("E\n");
        else if(n < 70) printf("D\n");
        else if(n < 80) printf("C\n");
        else if(n < 90) printf("B\n");
        else if(n <= 100) printf("A\n");
        else printf("error\n");
    }
    return 0;
}