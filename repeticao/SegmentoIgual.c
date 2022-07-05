#include <stdio.h>

int main(){

    int n, segant, segprox, cont=0;

    scanf("%d %d", &n, &segant);

    n-=1;
    while(n--){
        scanf("%d", &segprox);
        if(segant == segprox){
            cont++;
        }
        segant = segprox;
    }
    printf("O comprimento do segmento de numeros iguais e: %d\n", cont);

    return 0;
}