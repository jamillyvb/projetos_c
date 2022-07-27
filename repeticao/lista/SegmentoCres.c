#include <stdio.h>

int main() {
    
    int n, valAnti, valAtual, cont=1, maior=-9999;
  
    scanf("%d", &n);
    scanf("%d",&valorant);
    
    n = n-1;
    
    while(n--) {
        scanf("%d",&valoratual);
        if(valorant<valoratual){
          cont++;
        }else{
          cont = 1;
        }

        if(maior<cont){
            maior = cont;
        }
        valorant = valoratual;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n",maior);
    return 0;
}
