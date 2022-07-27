#include <stdio.h>

int main(){

    int n, i=0, j=0, a=0;

    scanf("%d", &n);

    for(i=1; i<n; i++){
        for(j=1; ((i*j)%n)!=1; j++){
            a++;    
        }
        if(i<=j && i<=n && j<=n){
            printf("(%d,%d)\n", i, j);
        }
    }
    return 0;
}