#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long n;
    while(scanf("%lld", &n) != EOF){
        long long sum = 1;
        for(long long i = 2; i <= n; i++){
            sum *= i;
        }
        printf("%lld\n", sum);
    }
}