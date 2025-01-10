#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x;
    int arr[4];
    scanf("%d", &x);
    arr[0] = x % 60;
    x /= 60;
    arr[1] = x % 60;
    x /= 60;
    arr[2] = x % 24;
    printf("%d days\n", x / 24);
    printf("%d hours\n", arr[2]);
    printf("%d minutes\n", arr[1]);
    printf("%d seconds\n", arr[0]);
    return 0;
}