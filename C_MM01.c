#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float a, b, c;
    while(scanf("%f %f %f", &a, &b, &c) != EOF){
        printf("Trapezoid area:%.1f\n", (a+b)*c/2);
    }
    return 0;
}