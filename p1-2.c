#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[10000];
    scanf("%s", str);
    for(int i = 0; str[i] != 0; i++){
        printf("%c\n", str[i]);
    }
    return 0;
}