#include <stdio.h>

int main(){ 
    
    int i, n, soma=0;

    scanf("%d", &n);

    printf("%d = ", n); 
    for(i=1; i<=(n/2); i++){
        if(n%i == 0){
            soma+=i;
            printf("%d", i);
            if(i>=1 && n>1 && i<(n/2)){
                printf(" + ");
            }
        }
    }
    printf(" = %d ", soma);
    if(n != soma){
        printf("(NUMERO NAO E PERFEITO)\n");
        return 0;
    }
    printf("(NUMERO PERFEITO)\n");

    return 0;
}