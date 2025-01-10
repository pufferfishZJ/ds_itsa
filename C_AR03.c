#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long sum = 0, tmp;
    for(int i = 0; i < 6; i++){
        scanf("%lld", &tmp);
        sum += tmp*tmp*tmp;
    }
    printf("%lld\n", sum);
    return 0;
}