#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 1) printf("Person\n");
        else if(n == 2) printf("Fairy\n");
        else printf("Dwarf\n");
    }
    return 0;
}