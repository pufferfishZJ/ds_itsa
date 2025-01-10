#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    int cnt[500] = {0};
    scanf("%s", str);
    for(int i = 0; str[i] != 0; i++){
        cnt[str[i]]++;
    }
    for(int i = 200; i >= 32; i--){
        if(cnt[i]) printf("%d %d\n", i, cnt[i]);
    }
    return 0;
}