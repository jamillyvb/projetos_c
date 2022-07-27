#include <stdio.h>

int main(){

    int n, seq[1000], i, par=0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &seq[i]);
    }
    for(i=0; i<n; i++){
        if(seq[i]%2 == 0){
            par++;
            printf("%d", seq[i]);
            if(i>=0 && i<n){
                printf(" ");
            }
        }
    }
    printf("%d\n", par);

    return 0;
}