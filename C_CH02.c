#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char c;
    while(scanf("%c", &c) != EOF){
        if(c == 'E') printf("ByeBye\n");
        else if(c == 'M') printf("Male\n");
        else printf("Female\n");
    }
    return 0;
}