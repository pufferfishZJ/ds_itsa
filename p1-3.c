#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[10000];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = len-1; i >= 0; i--){
        printf("%c", str[i]);
        if(i != 0) printf(",");
        else printf("\n");
    }
    return 0;
}