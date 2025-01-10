#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        for(int i = 35; i <= a; i += 35){
            printf("%d%c", i, " \n"[i + 35 > a]);
        }
    }

}