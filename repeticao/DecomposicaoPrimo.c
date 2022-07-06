#include <stdio.h>

int main(){

    int a=2, n, i=2;

    do{
        scanf("%d", &n);
        if(n<1) printf("Fatoracao nao e possivel para o numero %d!\n", n);
    }while(n<1);
    
    printf("%d = ", n);
    while(n>1){
        if(n%i == 0){
            n/=i;
            printf("%d", i);
            if(i>1 && n>1){
                printf(" x ");
            }
        }else i++;        
    }
    printf("\n");

    return 0;
}