#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long n;
    while(scanf("%lld", &n) != EOF){
        long long x = n / 3;
        printf("%lld\n", x * (x+1) / 2 * 3);
    }
}