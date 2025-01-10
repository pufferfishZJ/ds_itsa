#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int c, s;
    while(scanf("%d", &c) != EOF){
        scanf("%d", &s);
        if(s == 1) printf("%.1lf\n", (double)0.7 * (c - 80));
        else printf("%.1lf\n", 0.6 * (c - 70));
    }
    return 0;
}