#include <stdio.h>

int main(){
    
    double d, salario, kw, custo;

    scanf("%lf %lf", &salario, &kw);
    
    custo = ((salario*0.7)/100);
    d = (custo*kw)*0.9;
    
    printf("Custo por kW: R$ %.2lf\n", custo);
    printf("Custo do consumo: R$ %.2lf\n", custo*kw);
    printf("Custo com desconto: R$ %.2lf\n", d);
    
    return 0;
}