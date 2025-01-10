#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n > 31) printf("Value of more than 31\n");
        else printf("%d\n", (1<<n));
    }
    return 0;
}