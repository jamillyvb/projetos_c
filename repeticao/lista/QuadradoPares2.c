#include <stdio.h>

int main(){

    int n, i=2, r;

    scanf("%d", &n);
    if(n>5 && n<2000){
        while(i<=n){
            r = i*i;
            printf("%d^2 = %d\n", i, r);
            i+=2;
        }
    }
    return 0;
}