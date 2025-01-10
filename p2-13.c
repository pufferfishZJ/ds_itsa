#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double w, h;
    scanf("%lf %lf", &w, &h);
    printf("%.2lf\n", w*100*100/h/h);
    return 0;
}