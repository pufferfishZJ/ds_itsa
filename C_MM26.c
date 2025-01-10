#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long n;
    scanf("%lld", &n);
    for(long long i = 1; i <= n; i++){
        printf("%lld*%lld=%lld\n", i, i, i*i);
    }

}