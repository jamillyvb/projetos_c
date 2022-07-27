#include <stdio.h>
#define D 200

int main()
{
    int numalt, Ni;
    float valor, lucro, inicio, fim, i, Mlucro = -999, Mvalor;
    
    scanf("%f %f %f", &valor, &inicio, &fim);

    if(inicio > fim){
        printf("INTERVALO INVALIDO.\n");
    }else{
        i = inicio;
        while(i <= fim){
            if (i < valor){
                numalt = 120 + 25 * (valor - i) / 0.5;
                lucro = numalt * i - D - 0.05 * numalt;
            }else{
                numalt = 120 - 30 * (i - valor) / 0.5;
                lucro = numalt * i - D - 0.05 * numalt;
            }
            if (Mlucro < lucro){
                Mlucro = lucro;
                Mvalor = i;
                Ni = numalt;
            }
            printf("V: %.2f, N: %d, L: %.2f\n", i, numalt, lucro);
            i = i + 1.00;
        }
        if (Mlucro < 0){
            Mvalor = 0;
            Mlucro = 0;
            Ni = 0;
        }
        printf("Melhor valor final: %.2f\n", Mvalor);
        printf("Lucro: %.2f\n", Mlucro);
        printf("Numero de ingressos: %d\n", Ni);
    }
    return 0;
}