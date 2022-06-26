#include <stdio.h>

int main(){
    int horas;
    float valor, v, t, r;

    scanf("%d", &horas);

    valor = (horas/3)*10;
    r = horas%3;
    v = r * 5;
    t = valor + v;

    printf("O VALOR A PAGAR E = %.2f\n", t);

    return 0;
}