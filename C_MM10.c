#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        printf("%.1lf\n", a*9/5+32);
    }
    return 0;
}