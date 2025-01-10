#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[300];
        scanf("%s", str);
        int l = strlen(str);
        for(int i = l - 1; i >= 0; i--){
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}