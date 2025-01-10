#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100000] = {0};
    while(scanf("%s", str) != EOF){
        long long sum = 0;
        for(int i = 0; i < 100000; i++){
            if(!str[i]) break;
            sum *= 26;
            sum += str[i] - 'A' + 1;
        }
        printf("%lld\n", sum);
    }
    return 0;
}