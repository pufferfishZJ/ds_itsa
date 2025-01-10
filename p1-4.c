#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[10000];
    scanf("%s", str);
    for(int i = 0; str[i] != 0; i++){
        for(int j = 0; j < str[i] - '0'; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}