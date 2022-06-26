#include <stdio.h>

int main(){

    float preco_fab, p_dist, p_imp, z, pd, pim;

    scanf("%f %f %f", &preco_fab, &p_dist, &p_imp);
    
    pd = (p_dist/100)*preco_fab;
    pim = (p_imp/100)*preco_fab;

    z = pd + pim + preco_fab;
    
    printf("O VALOR DO CARRO E = %.2f\n", z);

    return 0;
}