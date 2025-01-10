#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a > b){
            int tmp = a;
            a = b;
            b = tmp;
        }
        long long sum = 0;
        for(int i = a; i <= b; i++){
            sum += i;
        }
        printf("%lld\n", sum);
    }

}